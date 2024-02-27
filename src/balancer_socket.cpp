
#include "balancer_socket.h"
#include "../include/balancer_socket.h"

#include <iostream>

BalancerSocket::BalancerSocket() {
    if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    std::cout << "socket fd: " << sockfd << std::endl;
}

BalancerSocket::~BalancerSocket() {
    std::cout << "BalancerSocket dtr" << std::endl;
    if(sockfd > 0)
    {
        if (close(sockfd) < 0){
            perror("socket destroy failed");
        }
        else
        {
            std::cout << "socket closed" << std::endl;
        }
    }
}
