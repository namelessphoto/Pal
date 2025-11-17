#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalActionBase.h"
#include "PalAction_EntryReturnBackArea.generated.h"

UCLASS()
class PAL_API UPalAction_EntryReturnBackArea : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform ReturnPointTransform;
    
public:
    UPalAction_EntryReturnBackArea();

    UFUNCTION(BlueprintCallable)
    void TeleportToReturnPoint();
    
protected:
    UFUNCTION()
    void OnTeleportMoved();
    
    UFUNCTION(BlueprintPure)
    FTransform GetReturnPointTransform() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTeleportMoved();
    
};

