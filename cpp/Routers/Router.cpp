#include "Router.h"
#include "../Routing/OSPF/include/OSPF.h"

Router::Router() {}

bool Router::turnOSPFProcessOn() {
    OSPF ospf(this);
    return true;
}