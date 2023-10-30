#include "CZeroMQ_Connection.h"
#include <iostream>

int main () {
    std::cout << "Initiating ZeroMQ conneciton" << std::endl;
    ZeroMQ_Connection* connection = new ZeroMQ_Connection();
    return connection->create_connection();
}