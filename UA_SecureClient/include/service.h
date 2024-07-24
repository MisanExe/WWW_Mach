#pragma once 

#include "open62541pp/open62541pp.h"
#include "open62541pp/Node.h"

namespace WebMach{

   void printNodeTree(opcua::Node<opcua::Client> & root);
   opcua::Node<opcua::Client> find_node(opcua::Node<opcua::Client> & root, std::string nodeName);

}
