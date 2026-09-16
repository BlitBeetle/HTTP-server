#include "Socket.hpp"


//default constructor
HDE::Socket::Socket(int domain, int service, int protocol, int port, u_long interface)
{
    //define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    //establish socket
    sock = socket(domain, service, protocol);
    test_connection(sock);
    //establish connection
    connection = connect_to_network(sock, address);
    test_connection(connection);
}



//test connection virtaul function
void HDE::Socket::test_connection(int item_to_test)
{
    //confirms that the socket or connection has been established
    if (item_to_test < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}


//Getter functions
struct sockaddr_in HDE::Socket::get_address()
{
    return address;
}

int HDE::Socket::get_sock()
{
    return sock;
}

int HDE::Socket::get_connection()
{
    return connection;
}