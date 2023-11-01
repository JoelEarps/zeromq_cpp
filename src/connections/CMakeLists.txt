set(LIBRARY_SOURCES "CZeroMQ_Client.cpp" "CZeroMQ_Server.cpp")
set(LIBRARY_HEADERS "CZeroMQ_Client.h" "CZeroMQ_Server.h")

set(LIBRARY_INCLUDES 
    "./" )

add_library(${CONNECTION_LIBRARY} STATIC 
${LIBRARY_SOURCES}
${LIBRARY_HEADERS})

target_include_directories(${CONNECTION_LIBRARY} PUBLIC 
    ${LIBRARY_INCLUDES}
)

target_link_libraries(${CONNECTION_LIBRARY} PRIVATE zmq)