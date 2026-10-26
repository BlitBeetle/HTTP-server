#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "Socket.hpp"

//The class calls bind() function as a definition of connect_to_network virtual function.

namespace HDE
{
class BindingSocket: public Socket
{
private:
    int binding;
    void connect_to_network(int sock, struct sockaddr_in address);

public:
    //Constructor
    BindingSocket(int domain, int service, int protocol, int port, u_long interface);
    int get_binding();
};
 
}

#endif /* BindingSocket_hpp */