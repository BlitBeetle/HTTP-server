#ifndef Socket_hpp
#define Socket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE
{
class Socket
{
private:
    int sock;
    struct sockaddr_in address;

public:
    //contructor
    Socket(int domain, int service, int protocol, int port, u_long interface);
    //virtual function to connect to network
    virtual void connect_to_network(int sock, struct sockaddr_in address) = 0;
    //function to test sockets and connections
    void test_connection(int);
    //getter functions
    int get_sock();
    struct sockaddr_in get_address();
};
}

#endif /* Socket_hpp */