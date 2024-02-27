#include <iostream>
#include <memory>

#include "balancer.h"
#include "balancer_socket.h"

Balancer::Balancer() {
    std::cout << "hello balancer!!" << std::endl;

    auto bsocket = std::make_unique<BalancerSocket>();
    std::cout << "hello balancer socket!!" << std::endl;

}

Balancer& Balancer::GetInstance() {
    static auto instance = Balancer();
    return instance;
}