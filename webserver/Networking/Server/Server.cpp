#include "Server.hpp"

HDE::Server::Server(int domain, int service, int protocol, int port, u_long interface, int backl)
{
    socket = new ListeningSocket(domain, service, protocol, port, interface, backl);
    
}

HDE::ListeningSocket * HDE::Server::get_socket()
{
    return socket;
}