#include <iostream>

#include "L3Device.h"
#include "../routing/OSPF/include/OSPF.h"
#include "../IPv4.h"
#include "../routing/L3RoutingProtocol.h"
#include "../../dataStructures/List/include/List.h"

L3Device::L3Device() {
    printf("hello");
}

// bool L3Device::configureRoutingProtocol(L3RoutingProtocol protocol) {
//     routingProtocolList->push(protocol);
//     return true;
// }

// bool L3Device::sendPacketIPv4(IPv4 destination) {
//     return true;
// }

// L3Device::L3Device(/* args */) {}

// L3Device::~L3Device() {}