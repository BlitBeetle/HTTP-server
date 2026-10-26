#ifndef Server_hpp
#define Server_hpp

#include <stdio.h>
#include <unistd.h>

#include "../hdelibc-networking.hpp" //includes the library

namespace HDE
{
class Server
{
private:
    ListeningSocket * socket;
    virtual void accepter() = 0;
    virtual void handler() = 0;
    virtual void responder() = 0;
public:
    Server(int domain, int service, int protocol, int port, u_long interface, int backl);
    virtual void launch() = 0;
    ListeningSocket * get_socket();
};

}

#endif /*Server_hpp */