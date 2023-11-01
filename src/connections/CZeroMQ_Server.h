#include <zmq.hpp>
#include <iostream>
#include <chrono>
#include <thread>

class CZeroMQ_Server {
    public:
        CZeroMQ_Server(zmq::context_t& ctx, std::string& socket_server);

        bool initialise(); 
    private:
        zmq::context_t& m_zmq_ctx;
        std::string     m_socket_server;
};