#include "QosBeaconClient.h"

AQosBeaconClient::AQosBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AQosBeaconClient::ServerQosRequest_Implementation(const FString& InSessionId) {
}
bool AQosBeaconClient::ServerQosRequest_Validate(const FString& InSessionId) {
    return true;
}

void AQosBeaconClient::ClientQosResponse_Implementation(EQosResponseType Response) {
}


