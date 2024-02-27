#pragma once


class Balancer {
public:
    static Balancer& GetInstance();
private:
    explicit Balancer();

};