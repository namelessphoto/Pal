#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalContainerId.h"
#include "PalItemThrottledSpawnRequest.generated.h"

class UWorld;

UCLASS()
class UPalItemThrottledSpawnRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY()
    FPalContainerId TemporaryContainerId;
    
    UPROPERTY()
    FVector SpawnLocation;
    
    UPROPERTY()
    FVector ReleaseDirection;
    
    UPROPERTY()
    bool bAutoPickup;
    
    UPROPERTY()
    FGuid PickupablePlayerUid;
    
    UPalItemThrottledSpawnRequest();

};

