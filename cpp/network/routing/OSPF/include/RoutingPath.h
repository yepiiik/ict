#ifndef ROUTING_PATH_H
#define ROUTING_PATH_H

#include <string>
#include "IPv4.h"

class RoutingPath {
    IPv4 destinationAddress;
    short int cost;
    short int distance;
    std::string interface;

public:
    RoutingPath(
        IPv4 &destinationAddress,
        short int cost = 0,
        short int distance = 0,
        std::string interface = ""
    ) : 
        destinationAddress(destinationAddress),
        cost(cost),
        distance(distance),
        interface(interface)
    {}
};

#endif