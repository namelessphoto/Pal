#pragma once
#include "CoreMinimal.h"
#include "EPalLeashState.h"
#include "PalAILeashActorBase.h"
#include "PalDeadInfo.h"
#include "PalAISquadLeashActor.generated.h"

class AActor;
class APalAISquadLeashActor;
class APalCharacter;
class UPalSquad;

UCLASS()
class APalAISquadLeashActor : public APalAILeashActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLeashedSquadLeaderChanged, APalAISquadLeashActor*, SquadLeashActor, APalCharacter*, OldLeashedLeader, APalCharacter*, NewLeashedLeader);
    
    UPROPERTY(BlueprintReadOnly)
    UPalSquad* Squad;
    
    UPROPERTY(BlueprintReadOnly)
    APalCharacter* SquadLeader;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<APalCharacter*, EPalLeashState> LeashedSquadCharacters;
    
    UPROPERTY(BlueprintAssignable)
    FOnLeashedSquadLeaderChanged OnLeashedSquadLeaderChanged;
    
    APalAISquadLeashActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static APalAISquadLeashActor* SpawnSquadLeash(UPalSquad* NewSquad, float InLeashInnerRadius, float InLeashOuterRadius, float InInvokerExtentRadius, bool bInAutoActivateLeash);
    
protected:
    UFUNCTION()
    void OnRemovedSquadMember(AActor* RemovedMember);
    
    UFUNCTION()
    void OnDeadSquadMember(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnAddedSquadMember(AActor* AddedMember);
    
};

