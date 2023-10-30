#include <gtest/gtest.h>
#include "CZeroMQ_Connection.h"

TEST(CalculatorTest, AddTest) {
    ZeroMQ_Connection test_connection;
    ASSERT_EQ(test_connection.create_connection(), 12);  // Assuming add function works correctly
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}