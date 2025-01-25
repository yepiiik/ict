#ifndef L3_ROUTING_PROTOCOL_H
#define L3_ROUTING_PROTOCOL_H

class L3Device;

class L3RoutingProtocol {
    L3Device* device;
public:
    L3RoutingProtocol(L3Device* device = nullptr);    
};

L3RoutingProtocol::L3RoutingProtocol(
    L3Device* device
) :  
    device(device)
{}

#endif