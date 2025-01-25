#include <iostream>

#include "../../../network/devices/L3Device.h"
#include "../../../network/routing/OSPF/include/OSPF.h"

int main() {
    L3Device router;
    router.configureRoutingProtocol(OSPF(&router));

    return 0;
}