cmake_minimum_required(VERSION 3.7.0)
project(MyOPC_Client)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(open62541pp REQUIRED)

#path to opcua 
set(OPCUA_SDK_DIR "/usr/local")

#inlude dirctories
include_directories("${OPCUA_SDK_DIR}/include/open62541pp")
include_directories("/usr/local/include")

#link directory 
link_directories("${OPCUA_SDK_DIR}/lib/arm-linux-gnueabihf")
link_directories("/usr/local/lib")  # General libraries path
link_directories("/usr/lib")        # System libraries path

# Add the open62541 static library


#execuatble 
add_executable(MyOPC_Client src/example_client.cpp)

#find pthread library
find_package(Threads REQUIRED)
target_link_libraries(MyOPC_Client PRIVATE open62541pp::open62541pp)


# Optionally set the path for runtime libraries (useful for running the executable)

