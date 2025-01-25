#include "../include/OSPF.h"
#include "../include/RoutingPath.h"

#include "../../../network/devices/L3Device.h"
#include "../../../network/IPv4.h"

#include "../../../dataStructures/List/include/List.h"


OSPF::OSPF(
    L3Device* router = nullptr
) :
    router(router)
{
    printf("I am OSPF %x", this);
}

bool OSPF::stage1() {
    sendPacket(IPv4(12), "Hello");
}

bool OSPF::sendPacket(IPv4 destination, std::string value) {
    RoutingTable->find(RoutingPath(destination));
    return true;
}