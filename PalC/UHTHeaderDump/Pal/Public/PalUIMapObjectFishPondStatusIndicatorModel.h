#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUIMapObjectFishPondStatusIndicatorModel.generated.h"

class UPalMapObjectFishPondModel;
class UPalUIMapObjectFishPondStatusIndicatorModel;
class UPalWorkProgress;

UCLASS(BlueprintType)
class PAL_API UPalUIMapObjectFishPondStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectFishPondStatusIndicatorModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateSelectedTargetDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateProductNumInfoDelegate;
    
    UPalUIMapObjectFishPondStatusIndicatorModel();

private:
    UFUNCTION()
    void OnUpdateTarget(UPalMapObjectFishPondModel* InOwnerConcreteModel);
    
    UFUNCTION()
    void OnUpdateProductNumInfo(UPalMapObjectFishPondModel* InOwnerConcreteModel);
    
public:
    UFUNCTION(BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
    UFUNCTION(BlueprintPure)
    FName GetTargetLotteryName() const;
    
    UFUNCTION(BlueprintPure)
    void GetProductNumInfo(int32& OutRemainProductNum, int32& OutRequestedProductNum) const;
    
};

