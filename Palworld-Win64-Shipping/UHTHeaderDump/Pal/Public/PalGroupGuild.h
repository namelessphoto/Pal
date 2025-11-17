#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalFastGuildPlayerInfoRepInfoArray.h"
#include "PalGroupGuildBase.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupGuild.generated.h"

class UPalGuildCharacterTeamMission;
class UPalGuildItemStorage;
class UPalGuildLab;
class UPalIndividualCharacterParameter;
class UPlGuildPlayerInfoFilteringWaiter;

UCLASS()
class UPalGroupGuild : public UPalGroupGuildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastGuildPlayerInfoRepInfoArray PlayerInfoRepInfoArray;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid AdminPlayerUId;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPlGuildPlayerInfoFilteringWaiter*> FilteringWaiterArray;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalGuildItemStorage* ItemStorage;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalGuildCharacterTeamMission* CharacterTeamMission;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalGuildLab* Lab;
    
public:
    UPalGroupGuild();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnFilteredPlayerInfo(UPlGuildPlayerInfoFilteringWaiter* Waiter, const FPalGuildPlayerInfo& FilteredInfo);
    
    UFUNCTION()
    void OnChangedGuildMemberNickName(UPalIndividualCharacterParameter* Parameter, const FString& NickName);
    
};

