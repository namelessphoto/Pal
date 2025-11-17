#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectPickableCharacterModelBase.h"
#include "PalMapObjectDeathDroppedCharacterModel.generated.h"

class APalPlayerState;
class UPalMapObjectDeathDroppedCharacterModel;

UCLASS()
class PAL_API UPalMapObjectDeathDroppedCharacterModel : public UPalMapObjectPickableCharacterModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectDeathDroppedCharacterModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnNotifiedGuildUpdateInClientDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bCanOpenForAnyone;
    
public:
    UPalMapObjectDeathDroppedCharacterModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnChangedPlayerInfoInLocalPlayerGuild_ClientInternal(APalPlayerState* LocalPlayerState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSameGuildInLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOpenForAnyone() const;
    
};

