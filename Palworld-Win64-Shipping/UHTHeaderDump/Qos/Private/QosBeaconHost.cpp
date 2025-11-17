#include "QosBeaconHost.h"
#include "QosBeaconClient.h"

AQosBeaconHost::AQosBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("QosBeaconClient");
    this->ClientBeaconActorClass = AQosBeaconClient::StaticClass();
}


