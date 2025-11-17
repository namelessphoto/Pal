#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalContainerId.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterDropItem.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterDropItem : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalContainerId TempContainerID;
    
    UPROPERTY()
    FVector ReleaseDirection;
    
    UPROPERTY()
    bool bAutoPickup;
    
    UPROPERTY()
    FGuid PickupablePlayerUid;
    
    UPalMapObjectModelInitializeExtraParameterDropItem();

};

