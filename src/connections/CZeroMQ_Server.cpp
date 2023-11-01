#include "CZeroMQ_Server.h"
#include <iostream>

namespace {
    std::string INPROC_SOCKET_SERVER("inproc://zenobe-test-zmq");

}

CZeroMQ_Server::CZeroMQ_Server(zmq::context_t& ctx, std::string& socket_server)
    : m_zmq_ctx(m_zmq_ctx),
      m_socket_server(socket_server)
{
    zmq::socket_t publisher(m_zmq_ctx, zmq::socket_type::pub);
	publisher.bind(INPROC_SOCKET_SERVER);
}

bool CZeroMQ_Server::publish()
{
    zmq::socket_t publisher(m_zmq_ctx, zmq::socket_type::pub);
	publisher.bind(INPROC_SOCKET_SERVER);

    publisher.send(zmq::str_buffer("A"), zmq::send_flags::sndmore);
    publisher.send(zmq::str_buffer("Message in A envelope"));

    std::cout << "Initialising..." << std::endl;
    return true;
}

bool CZeroMQ_Server::subscribe(){

    //  Prepare subscriber
	zmq::socket_t subscriber(*ctx, zmq::socket_type::sub);
	subscriber.connect("inproc://#1");

	//  Thread2 opens "A" and "B" envelopes
	subscriber.setsockopt(ZMQ_SUBSCRIBE, "A", 1);
	subscriber.setsockopt(ZMQ_SUBSCRIBE, "B", 1);

	

}

bool CZeroMQ_Server::listen() {
    while (1) {
		//  Read envelope address
		zmq::message_t address;
		zmq::recv_result_t result = subscriber.recv(address);

		//  Read message contents
		zmq::message_t contents;
		result = subscriber.recv(contents);

		std::stringstream out;
		out << "Thread2: [" << address.to_string_view() << "] " << contents.to_string_view() << std::endl;
		OutputDebugString(out.str().c_str());
	}
}



