#pragma once

#include "open62541pp/open62541pp.h"
#include "open62541pp/Client.h"
#include "memory.h"
#include <string_view>
#include <string>
#include <open62541pp/AccessControl.h>
namespace Mach{


    class Mach_connect{

        public:
            //constructor
            Mach_connect(std::string_view endpointUrl, std::string username, std::string password);

        private:
            /**
             * @brief opcua client, unencrypted
             */
            std::unique_ptr<opcua::Client> _client = std::make_unique<opcua::Client>();
            opcua::Login _login;

            //opcua::Client _client();
    };

}