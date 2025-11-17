#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalLoginPlayer.generated.h"

UCLASS()
class UPalLoginPlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector RegisteredRespawnLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FQuat RegisteredRespawnRotation;
    
public:
    UPalLoginPlayer();

};

