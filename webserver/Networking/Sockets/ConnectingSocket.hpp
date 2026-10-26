#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>
#include "Socket.hpp"

//The class calls bind() function as a definition of connect_to_network virtual function.

namespace HDE
{
class ConnectingSocket: public Socket
{
private:
    int connection;
public:
    //Constructor
    ConnectingSocket(int domain, int service, int protocol, 
        int port, u_long interface);
    // Virtual function from parent
    void connect_to_network(int sock, struct sockaddr_in address);
};
 
}

#endif /* ConnectingSocket_hpp */