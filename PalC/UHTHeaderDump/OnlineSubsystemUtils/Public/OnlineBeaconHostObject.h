#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "OnlineBeaconHostObject.generated.h"

class AOnlineBeaconClient;

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHostObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString BeaconTypeName;
    
    UPROPERTY()
    TSubclassOf<AOnlineBeaconClient> ClientBeaconActorClass;
    
    UPROPERTY()
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHostObject(const FObjectInitializer& ObjectInitializer);

};

