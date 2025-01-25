#ifndef OSPF_H
#define OSPF_H

#include <iostream>

#include "../../L3RoutingProtocol.h"


template <typename T>
class List;

class AVL;
class L3Device;
class RoutingPath;
class IPv4;

class OSPFPeer {
    IPv4* addressIPv4;

public:
    OSPFPeer(
        IPv4* addressIPv4
    ) : 
        addressIPv4(addressIPv4)
    {}
};

class OSPF : public L3RoutingProtocol {
    AVL* LSDB;
    List<OSPFPeer>* LSAdjacency;
    List<RoutingPath>* RoutingTable;
    L3Device* router;

    bool stage1();
    bool stage2();
    bool stage3();
    bool stage4();
    bool stage5();

    bool sendPacket(IPv4 destination, std::string value);
public:
    OSPF(L3Device* router);
};


#endif