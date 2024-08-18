#pragma once

#include "open62541pp/open62541pp.h"
#include "open62541pp/Client.h"
#include "memory.h"
#include <string_view>
#include <string>
#include <open62541pp/AccessControl.h>
namespace Mach{

    enum class ConnectState{
        ABORTED,
        FAILED_TO_CONNECT,
        CONNECTED
    };


    class Mach_connect{

        public:
            //constructor
            Mach_connect(std::string_view endpointUrl, std::string username, std::string password);
               /**
             * @brief connect with default parameters
             */
            ConnectState connect();
            /**
             * @brief connect with explicit parameters
             */
            ConnectState connect(std::string_view endpointUrl="127.0.0.1:4840", std::string username = "None", std::string password = "None");

        private:
            /**
             * @brief opcua client, unencrypted
             */
            //std::unique_ptr<opcua::Client> _client ;
            opcua::Login _login;
         


            //opcua::Client _client();
    };

}