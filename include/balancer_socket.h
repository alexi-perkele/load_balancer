#pragma once

#include <sys/types.h>
#include <cstdlib>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#include <string>

class BalancerSocket {
public:
     explicit BalancerSocket();
     ~BalancerSocket();

private:
    int sockfd = 0;
    std::string buffer;
    struct sockaddr_in servaddr, cliaddr;
};