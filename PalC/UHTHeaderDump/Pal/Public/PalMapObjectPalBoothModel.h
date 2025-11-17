#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalPalBoothTradeInfo.h"
#include "PalMapObjectPalBoothModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalMapObjectFunctionAffectedByWorkStatusBase;

UCLASS()
class PAL_API UPalMapObjectPalBoothModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTradeInfoUpdatedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrivateLockPlayerUIdUpdatedDelegate, FGuid, PlayerUId);
    
    UPROPERTY(BlueprintAssignable)
    FOnTradeInfoUpdatedDelegate OnTradeInfoUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnPrivateLockPlayerUIdUpdatedDelegate OnPrivateLockChanged;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TradeInfos)
    TArray<FPalPalBoothTradeInfo> TradeInfos;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectFunctionAffectedByWorkStatusBase* WorkAffection;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PrivateLockPlayerUId)
    FGuid PrivateLockPlayerUId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FName> SoldPalIds;
    
public:
    UPalMapObjectPalBoothModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void RequestTrade_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestTrade(const int32 TradeIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestTogglePrivateLock();
    
    UFUNCTION()
    void RequestRemoveTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveTradeInfo(const int32 TradeInfoIndex);
    
    UFUNCTION()
    void RequestPrivateLock_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestCreateTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateTradeInfo(const FPalPalBoothTradeInfo& TradeInfo);
    
    UFUNCTION()
    void RequestChangeTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTradeInfo(const int32 TradeInfoIndex, const FPalPalBoothTradeInfo& TradeInfo);
    
    UFUNCTION()
    void ReleasePrivateLock_ServerInternal(const int32 RequestPlayerId);
    
protected:
    UFUNCTION()
    void OnRep_TradeInfos();
    
    UFUNCTION()
    void OnRep_PrivateLockPlayerUId();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLockedPrivateByLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    void GetTradeInfos(TArray<FPalPalBoothTradeInfo>& OutTradeInfo) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSoldPalCharacterID(int32 TradeIndex) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetBoothPalByIndividualId(const FPalInstanceID IndividualId);
    
};

