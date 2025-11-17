#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectFishPondCaughtCharacterInfo.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFishPondModel.generated.h"

class UPalMapObjectFishPondModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS()
class PAL_API UPalMapObjectFishPondModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectFishPondModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateTargetDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateProductNumInfoDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TargetLotteryName)
    FName TargetLotteryName;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RequestedProductNum)
    int32 RequestedProductNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RemainProductNum)
    int32 RemainProductNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectFishPondCaughtCharacterInfo> CaughtCharacterInfos;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bExistsCaughtCharacter;
    
    UPROPERTY()
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPROPERTY()
    TSubclassOf<UPalUserWidgetOverlayUI> ObtainCharactersUIClass;
    
public:
    UPalMapObjectFishPondModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestStartProduct_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void RequestObtainCharacters_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestCancelSelectedTarget_ServerInternal(const int32 RequestPlayerId);
    
protected:
    UFUNCTION()
    void OnRep_TargetLotteryName();
    
    UFUNCTION()
    void OnRep_RequestedProductNum();
    
    UFUNCTION()
    void OnRep_RemainProductNum();
    
private:
    UFUNCTION()
    void OnMultiHatchComplete(const TArray<FPalInstanceID>& HatchedIDs);
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION()
    void NotifyFailedObtainCharacters_ClientInternal();
    
};

