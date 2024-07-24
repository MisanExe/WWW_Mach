
#include "../include/service.h"
#include <iostream>


namespace WebMach{

    void printNodeTree(opcua::Node<opcua::Client> & root){
        for(auto&& child : root.browseChildren()){
            std::cout<<"--"<< child.readBrowseName().getName() << "("<<")\n";
            printNodeTree(child);
        }
    }

    opcua::Node<opcua::Client> find_node(opcua::Node<opcua::Client> & root, std::string nodeName){
        for(auto&& child : root.browseChildren()){
            if (child.readBrowseName().getName() == nodeName){
                std::cout<<"found : "<<nodeName<<" with nodeID  : "<<std::endl;
                return child;
            }
            find_node(child, nodeName);
        }
        return NULL;
    }
}