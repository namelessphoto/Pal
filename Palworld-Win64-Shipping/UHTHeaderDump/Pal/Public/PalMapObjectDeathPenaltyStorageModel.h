#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectItemStorageModel.h"
#include "PalMapObjectDeathPenaltyStorageModel.generated.h"

class APalPlayerState;
class UPalMapObjectDeathPenaltyStorageModel;

UCLASS()
class PAL_API UPalMapObjectDeathPenaltyStorageModel : public UPalMapObjectItemStorageModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectDeathPenaltyStorageModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnNotifiedGuildUpdateInClientDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid LocationId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FDateTime CreatedAtRealTime;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bCanOpenByProgressTime;
    
public:
    UPalMapObjectDeathPenaltyStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnChangedPlayerInfoInLocalPlayerGuild_ClientInternal(APalPlayerState* LocalPlayerState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSameGuildInLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOpenForAnyone() const;
    
    UFUNCTION(BlueprintPure)
    FDateTime GetCreatedAtRealTime() const;
    
};

