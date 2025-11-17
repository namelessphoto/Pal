#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFishingSpotAreaModel.generated.h"

class APalFishingSpotArea;

UCLASS()
class PAL_API UPalFishingSpotAreaModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid SpotAreaId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RespawnTimeElapsed;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RespawnTimeFinish;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 CurrentFishCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 MaxFishCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalFishingSpotArea* SpotAreaActor;
    
public:
    UPalFishingSpotAreaModel();

private:
    UFUNCTION()
    void OnDespawnFishShadow(int32 RemainFishCount);
    
};

