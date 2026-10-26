#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, 
    int service, int protocol, int port, u_long interface, 
    int backl): BindingSocket(domain, service, protocol, 
        port, interface)
{
    backlog = backl; //sets the backlog
    start_listening(); //Listens on the network
    test_connection(listening); //confirms it works
}

void HDE::ListeningSocket::start_listening()
{
    listening = listen(get_sock(), backlog);
}

int HDE::ListeningSocket::get_listening()
{
    return listening;
}

int HDE::ListeningSocket::get_backlog()
{ 
    return backlog;
}