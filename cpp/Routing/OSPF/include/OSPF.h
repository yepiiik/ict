#ifndef OSPF_H
#define OSPF_H

#include <iostream>
#include "AVL.h"
#include "List.h"
#include "RoutingPath.h"
#include "IPv4.h"
#include "Router.h"

class OSPFPeer {
    IPv4 addressIPv4;

public:
    OSPFPeer(
        IPv4 addressIPv4
    ) : 
        addressIPv4(addressIPv4)
    {}
};

class OSPF {
    AVL LSDB;
    List<OSPFPeer> LSAdjacency;
    List<RoutingPath> RoutingTable;
    Router* router;

    bool stage1();
    bool stage2();
    bool stage3();
    bool stage4();
    bool stage5();

    bool sendPacket(IPv4& destination, std::string value);
public:
    OSPF(Router* router);
};


#endif