#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDistributeTickManager.generated.h"

class APalMapObjectCommonDropItem3D;

UCLASS(BlueprintType)
class PAL_API UPalDistributeTickManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<APalMapObjectCommonDropItem3D*> TickTargets;
    
public:
    UPalDistributeTickManager();

    UFUNCTION(BlueprintCallable)
    bool RemoveTickTarget(APalMapObjectCommonDropItem3D* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    bool AddTickTarget(APalMapObjectCommonDropItem3D* TargetActor);
    
};

