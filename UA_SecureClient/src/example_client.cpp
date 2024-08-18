#include <iostream>

#include "open62541pp/open62541pp.h"
#include "open62541pp/Node.h"

int main() {
	std::cout<<"Enter connection address :  ";
	std::string host;
	std::cin>>host;	

    #define UA_ENABLE_ENCRYPTION

    opcua::Client client;
    client.connect(host.c_str());

    opcua::Node node = client.getNode(opcua::VariableId::Server_ServerStatus_CurrentTime);
    const auto dt = node.readValueScalar<opcua::DateTime>();

    std::cout << "Server date (UTC): " << dt.format("%Y-%m-%d %H:%M:%S") << std::endl;
    
    //get root node
    auto root = client.getRootNode();
    auto name = (std::string)root.readBrowseName().getName();
    std::cout<<"Root @ "<<name<<std::endl;
    //log the name

    std::string input;



    while(input.empty()){
        std::cin>>input;
    }
}
 