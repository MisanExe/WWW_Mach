#include "../include/mach_connect.h"

/**
 * @brief Constructor to connect
 */
Mach::Mach_connect::Mach_connect(std::string_view endpointUrl, std::string username = "none", std::string password = "none")
{
     this->_login.username = username;
     this->_login.password = password;
}
