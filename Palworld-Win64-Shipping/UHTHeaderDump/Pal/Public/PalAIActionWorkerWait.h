#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingRequestResult -FallbackName=EPathFollowingRequestResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAIActionWorkerChildBase.h"
#include "PalBaseCampWorkerWalkAroundDynamicInfo.h"
#include "PalBaseCampWorkerWalkAroundSettings.h"
#include "PalAIActionWorkerWait.generated.h"

UCLASS(EditInlineNew)
class UPalAIActionWorkerWait : public UPalAIActionWorkerChildBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FPalBaseCampWorkerWalkAroundSettings WalkAroundSettings;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBaseCampWorkerWalkAroundDynamicInfo WalkAroundDynamicInfo;
    
public:
    UPalAIActionWorkerWait();

protected:
    UFUNCTION(BlueprintCallable)
    void TickForWalkAround(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult> MoveToLocationInBaseCamp(const FVector& ToLocation, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const FVector& ToLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CalcWalkAroundDestination(const float Radius, FVector& OutDestination);
    
};

