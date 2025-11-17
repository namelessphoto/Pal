#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDeadInfo.h"
#include "PalLogoutPlayerController.generated.h"

class UPalPlayerInventoryData;
class UPalPlayerOtomoData;

UCLASS()
class PAL_API APalLogoutPlayerController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid PlayerUId;
    
    UPROPERTY()
    UPalPlayerInventoryData* InventoryData;
    
    UPROPERTY()
    UPalPlayerOtomoData* OtomoData;
    
public:
    APalLogoutPlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnDead(FPalDeadInfo DeadInfo);
    
};

