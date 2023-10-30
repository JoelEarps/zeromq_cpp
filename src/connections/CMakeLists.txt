set(LIBRARY_SOURCES "CZeroMQ_Connection.cpp")
set(LIBRARY_HEADERS "CZeroMQ_Connection.h")

set(LIBRARY_INCLUDES 
    "./" )

add_library(${CONNECTION_LIBRARY} STATIC 
${LIBRARY_SOURCES}
${LIBRARY_HEADERS})

target_include_directories(${CONNECTION_LIBRARY} PUBLIC 
    ${LIBRARY_INCLUDES}
)