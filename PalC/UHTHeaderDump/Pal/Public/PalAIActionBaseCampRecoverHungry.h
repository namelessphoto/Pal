#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBaseCampRecoverHungry.generated.h"

class UPalUserWidgetWorldHUD;

UCLASS(EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungry : public UPalAIActionBaseCampBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid WantFoodHUDId;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetWorldHUD> WantFoodHUDClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector WantFoodHUDOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    FPalMonsterControllerBaseCampHungryParameter HungeryParameter;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    bool bStuckInApproach;
    
public:
    UPalAIActionBaseCampRecoverHungry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActionEat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActionApproach();
    

    // Fix for true pure virtual functions not being implemented
};

