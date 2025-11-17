#include "DatacenterQosInstance.h"

FDatacenterQosInstance::FDatacenterQosInstance() {
    this->Result = EQosDatacenterResult::Invalid;
    this->AvgPingMs = 0;
    this->bUsable = false;
}

