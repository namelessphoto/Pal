#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAIActionBaseCampChildBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "PalAIActionBaseCampRecoverHungryChildBase.generated.h"

class UPalAIActionBaseCampRecoverHungry;
class UPalMapObjectConcreteModelBase;

UCLASS(Abstract, EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungryChildBase : public UPalAIActionBaseCampChildBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampRecoverHungryChildBase();

protected:
    UFUNCTION(BlueprintPure)
    bool TryGetTargetMapObjectConcreteModel(UPalMapObjectConcreteModelBase*& OutTargetModel);
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowWantFoodHUD(const bool bShow);
    
    UFUNCTION(BlueprintPure)
    bool IsExistEnoughFoodInTarget();
    
    UFUNCTION(BlueprintPure)
    bool IsAvailableDistance(const float Margin);
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocation();
    
public:
    UFUNCTION(BlueprintPure)
    UPalAIActionBaseCampRecoverHungry* GetParentRecoverHungryAction();
    
protected:
    UFUNCTION(BlueprintPure)
    void GetHungryParameter(FPalMonsterControllerBaseCampHungryParameter& HungeryParameter);
    

    // Fix for true pure virtual functions not being implemented
};

