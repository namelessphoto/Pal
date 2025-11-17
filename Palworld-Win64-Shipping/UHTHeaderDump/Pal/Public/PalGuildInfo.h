#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "PalGuildPlayerInfo.h"
#include "PalGuildInfo.generated.h"

class UPalGroupGuildBase;

UCLASS()
class PAL_API APalGuildInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid GroupId;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_PlayerUIds)
    TArray<FGuid> PlayerUIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Guild)
    UPalGroupGuildBase* Guild;
    
public:
    APalGuildInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdatePlayerInfo_ServerInternal(const UPalGroupGuildBase* InGuild, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo);
    
    UFUNCTION()
    void OnRep_PlayerUIds(const TArray<FGuid>& OldValue);
    
    UFUNCTION()
    void OnRep_Guild(const UPalGroupGuildBase* OldValue);
    
};

