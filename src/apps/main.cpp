#include "CZeroMQ_Client.h"
#include "CZeroMQ_Server.h"
#include <iostream>

int main () {
    std::cout << "Initiating ZeroMQ conneciton" << std::endl;
    CZeroMQ_Client* client = new CZeroMQ_Client();
    CZeroMQ_Server* server = new CZeroMQ_Server();
    return client->create_connection();
}