#include "L3Device.h"
#include "../network/routing/OSPF/include/OSPF.h"
#include "../network/IPv4.h"
#include "../network/routing/L3RoutingProtocol.h"
#include "../dataStructures/List/include/List.h"

L3Device::L3Device() {}

bool L3Device::configureRoutingProtocol(L3RoutingProtocol protocol) {
    routingProtocolList->push(protocol);
    return true;
}

bool L3Device::sendPacketIPv4(IPv4 destination) {

}

L3Device::L3Device(/* args */) {}

L3Device::~L3Device() {}