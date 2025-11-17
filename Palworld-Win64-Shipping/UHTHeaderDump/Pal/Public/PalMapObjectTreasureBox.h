#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalActionType.h"
#include "EPalMapObjectTreasureSpecialType.h"
#include "PalMapObject.h"
#include "PalMapObjectTreasureBox.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS()
class PAL_API APalMapObjectTreasureBox : public APalMapObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenDelegate);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector DropItemLocalLocation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPlayOpenAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float LongHoldInteractDuration;
    
    UPROPERTY(EditDefaultsOnly)
    EPalActionType InteractPlayerActionType;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsLockRiding;
    
    UPROPERTY(EditDefaultsOnly)
    EPalMapObjectTreasureSpecialType TreasureSpecialType;
    
    UPROPERTY(EditDefaultsOnly)
    EPalActionType OpeningPlayerActionType;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnOpenDelegate OnOpenDelegate;
    
    APalMapObjectTreasureBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerUnlockElemental();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerOpen();
    
private:
    UFUNCTION()
    void OnUnlockElementalInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnReceiveOpenInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyStartOpenInAnimation();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastTriggerUnlockElemental();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastTriggerOpen();
    
};

