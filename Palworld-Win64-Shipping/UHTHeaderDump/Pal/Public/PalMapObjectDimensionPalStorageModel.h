#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectDimensionPalStorageModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectDimensionPalStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePrivateLock, bool, bCurrentLocked);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatePrivateLock OnUpdatePrivateLock;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> DimensionPalStorageWidget;
    
    UPROPERTY(ReplicatedUsing=OnRep_PrivateLock)
    bool bPrivateLock;
    
    UPalMapObjectDimensionPalStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void UnlockDimensionLocker_ServerInternal(const int32 PlayerId);
    
    UFUNCTION()
    void OnRep_PrivateLock();
    
    UFUNCTION()
    void LockDimensionLocker_ServerInternal(const int32 PlayerId);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanOpenDimensionPalStorageMenu_LocalPlayer() const;
    
};

