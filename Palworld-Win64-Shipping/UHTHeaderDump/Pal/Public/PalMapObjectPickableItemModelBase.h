#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPickableItemModelBase.generated.h"

UCLASS(Abstract)
class UPalMapObjectPickableItemModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bAutoPickedUp;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGuid PickupablePlayerUid;
    
private:
    UPROPERTY()
    FTimerHandle RemovePickupGuardTimerHandle;
    
public:
    UPalMapObjectPickableItemModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void RequestPickup_ServerInternal(const int32 RequestPlayerId, const bool bByAutoPickup);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPickup(const bool bByAutoPickup);
    
    UFUNCTION()
    void OnTimer_RemovePickupGuard();
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<FPalItemAndNum> CreatePickupItemInfo() const;
    
};

