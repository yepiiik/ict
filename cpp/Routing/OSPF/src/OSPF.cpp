#include "../include/OSPF.h"

OSPF::OSPF(
    Router* router = nullptr
) :
    router(router)
{
    printf("I am OSPF %x", this);
}

bool OSPF::stage1() {
    IPv4 ipv4(12);
    sendPacket(ipv4, "Hello");
}

bool OSPF::sendPacket(IPv4& destination, std::string value) {
    RoutingPath routingPath(destination);
    RoutingTable.find(routingPath);
    return true;
}