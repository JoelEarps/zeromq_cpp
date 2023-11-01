#include <gtest/gtest.h>
#include "CZeroMQ_Server.h"



TEST(ZeroMQ_Server, AddTest) {
    CZeroMQ_Server test_server;
    ASSERT_EQ(test_server.initialise(), true);  // Assuming add function works correctly
}

// Test Cases


// Move and seperate tests nicely - with main in nice place etc
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}