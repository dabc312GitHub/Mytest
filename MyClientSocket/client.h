#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>

using namespace std;

class client
{
    int cliente;
    int puerto;
    bool Exit;
    int bufsize;
    char buffer;
    char* ip;

public:
    client();
};

#endif // CLIENT_H
