add_executable(zero_mq_tests "CZeroMQ_Server.test.cpp" "CZeroMQ_Client.test.cpp")

target_link_libraries(zero_mq_tests gtest ${CONNECTION_LIBRARY})