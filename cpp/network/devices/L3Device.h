#ifndef L3_DEVICE_H
#define L3_DEVICE_H

template <typename T>
class List;

class IPv4;
class L3RoutingProtocol;

class L3Device {
    List<L3RoutingProtocol>* routingProtocolList;
public:
    L3Device(/* args */);
    ~L3Device();

    bool configureRoutingProtocol(L3RoutingProtocol protocol);

    bool sendPacketIPv4(IPv4 destination);
};


#endif