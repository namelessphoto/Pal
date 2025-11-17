#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalBaseCampModuleResourceCollectorTargetInterface.h"
#include "PalDamageInfo.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDropTreasureLotteryParameter.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectItemDropOnDamagModel.generated.h"

class UPalMapObjectItemDropOnDamagModel;
class UPalMapObjectModel;

UCLASS()
class UPalMapObjectItemDropOnDamagModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectItemCollectableInterface, public IPalBaseCampAssignableObjectInterface, public IPalBaseCampModuleResourceCollectorTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectItemDropOnDamagModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateDetectedByPlayerDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalItemAndNum> DropItemInfos;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bBaseCampResourceCollectorTarget;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRequireDetection;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_DetectedByPlayer)
    bool bDetectedByPlayer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectDropTreasureLotteryParameter> DropTreasureLotteryParameters;
    
public:
    UPalMapObjectItemDropOnDamagModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestMarkDetectedByPlayer_ServerInternal(const int32 PlayerId, bool bDetected);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestMarkDetectedByPlayer(const bool bDetected);
    
protected:
    UFUNCTION()
    void OnRep_DetectedByPlayer();
    
private:
    UFUNCTION()
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDetectedByPlayer() const;
    
private:
    UFUNCTION()
    void BroadcastMarkDetectedByPlayer_Multicast(const bool bDetected);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
};

