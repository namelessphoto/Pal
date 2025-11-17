#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalItemBoothTradeInfo.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectItemBoothModel.generated.h"

class UPalItemContainer;
class UPalMapObjectFunctionAffectedByWorkStatusBase;

UCLASS()
class PAL_API UPalMapObjectItemBoothModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateStoreContentsDelegate, UPalItemContainer*, Container);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTradeInfoUpdatedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrivateLockPlayerUIdUpdatedDelegate, FGuid, PlayerUId);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateStoreContentsDelegate OnUpdateStoreContentsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTradeInfoUpdatedDelegate OnTradeInfoUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnPrivateLockPlayerUIdUpdatedDelegate OnPrivateLockChanged;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TargetContainer)
    UPalItemContainer* StoreContainer;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TradeInfos)
    TArray<FPalItemBoothTradeInfo> TradeInfos;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectFunctionAffectedByWorkStatusBase* WorkAffection;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PrivateLockPlayerUId)
    FGuid PrivateLockPlayerUId;
    
public:
    UPalMapObjectItemBoothModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void RequestTrade_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestTrade(const int32 TradeIndex, const int32 GroupCount);
    
    UFUNCTION(BlueprintCallable)
    void RequestTogglePrivateLock();
    
    UFUNCTION()
    void RequestSortStore_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortStore();
    
    UFUNCTION()
    void RequestRemoveTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveTradeInfo(const int32 TradeInfoIndex);
    
    UFUNCTION()
    void RequestPrivateLock_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestCreateTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateTradeInfo(const FPalItemBoothTradeInfo& TradeInfo);
    
    UFUNCTION()
    void RequestChangeTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTradeInfo(const int32 TradeInfoIndex, const FPalItemBoothTradeInfo& TradeInfo);
    
    UFUNCTION()
    void ReleasePrivateLock_ServerInternal(const int32 RequestPlayerId);
    
private:
    UFUNCTION()
    void OnUpdateStoreContents(UPalItemContainer* Container);
    
protected:
    UFUNCTION()
    void OnRep_TradeInfos();
    
    UFUNCTION()
    void OnRep_TargetContainer();
    
    UFUNCTION()
    void OnRep_PrivateLockPlayerUId();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivateByLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    void GetTradeInfos(TArray<FPalItemBoothTradeInfo>& OutTradeInfo) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTargetItemStock(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    void GetStoreItemContainer(UPalItemContainer*& TargetContainer) const;
    
};

