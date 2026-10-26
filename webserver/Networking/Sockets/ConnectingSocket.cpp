#include "ConnectingSocket.hpp"

//Constructor
HDE::ConnectingSocket::ConnectingSocket(int domain, int service,
    int protocol, int port, u_long interface) : 
    Socket(domain, service, protocol, port, interface)
{
    connect_to_network(get_sock(), get_address());
    test_connection(connection);
}

//Definition of connect_to_network function
void HDE::ConnectingSocket::connect_to_network(int sock, 
    struct sockaddr_in address)
{
    connection = connect(sock, (struct sockaddr *)&address, 
    sizeof(address));
}