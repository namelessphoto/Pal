#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectItemStorageModel.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalMapObjectItemChestModel.generated.h"

class UPalMapObjectItemChestModel;

UCLASS()
class PAL_API UPalMapObjectItemChestModel : public UPalMapObjectItemStorageModel, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectItemChestModel*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdatePrivateLockPlayerUIdDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PrivateLockPlayerUId)
    FGuid PrivateLockPlayerUId;
    
public:
    UPalMapObjectItemChestModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestUnlockPrivate_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUnlockPrivate();
    
private:
    UFUNCTION()
    void RequestLockPrivate_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestLockPrivate();
    
private:
    UFUNCTION()
    void OnUpdateLocalPlayerPasswordLockInfo(const FPalMapObjectPasswordLockPlayerInfo& OldLocalPlayerInfo, const FPalMapObjectPasswordLockPlayerInfo& NewLocalPlayerInfo);
    
protected:
    UFUNCTION()
    void OnRep_PrivateLockPlayerUId(const FGuid& OldPrivateLockPlayerUId);
    
private:
    UFUNCTION()
    void OnReceiveRequestLockPrivateConfirm(const bool bOn);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivateByNotLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivateByNot(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivateByLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivateBy(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivate() const;
    

    // Fix for true pure virtual functions not being implemented
};

