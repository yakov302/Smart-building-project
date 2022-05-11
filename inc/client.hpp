#ifndef TCP_CLIENT_HPP
#define TCP_CLIENT_HPP

#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>

namespace home
{

class TcpClient
{
public: 
    TcpClient(const char* a_serverIp, int a_servrPort);
    ~TcpClient();

    bool sendAndReceiveData(void* a_buffer, int a_length);

private:
    int m_socket;
    struct sockaddr_in m_sin;
};


}//namespace home

#endif //TCP_CLIENT_HPP
