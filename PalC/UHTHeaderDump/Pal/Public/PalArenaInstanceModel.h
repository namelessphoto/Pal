#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EPalArenaInstanceState.h"
#include "EPalArenaRank.h"
#include "PalArenaRule.h"
#include "PalStageInstanceId.h"
#include "PalArenaInstanceModel.generated.h"

class APalArenaLevelInstance;
class APalArenaSoloNPCSpawner;
class APalPlayerCharacter;
class UDataLayerAsset;
class UPalArenaSequencer;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class PAL_API UPalArenaInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleEndTimeDelegate, FDateTime, BattleEndTime);
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FGuid ArenaInstanceId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FVector_NetQuantize RepFieldWarpPointLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform FieldWarpPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform ItemDropTransform;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FDateTime BattleEndTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    EPalArenaInstanceState ArenaInstanceState;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalArenaSequencer* LocalArenaSequencer;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalArenaSequencer* LocalArenaSpectateSequencer;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    TWeakObjectPtr<APalArenaLevelInstance> WeakArenaLevelInstance;
    
    UPROPERTY()
    TArray<APalPlayerCharacter*> EntryPlayers;
    
    UPROPERTY()
    TArray<APalPlayerCharacter*> Spectators;
    
    UPROPERTY()
    EPalArenaRank SoloModeRank;
    
    UPROPERTY()
    APalArenaSoloNPCSpawner* SoloNPCSpawner;
    
    UPROPERTY(Replicated)
    FPalArenaRule Rule;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ArenaRoomId;
    
    UPROPERTY(ReplicatedUsing=OnRep_AllIndividualCharacterParameters)
    TArray<UPalIndividualCharacterParameter*> AllIndividualCharacterParameters;
    
private:
    UPROPERTY()
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY()
    int32 InBattleTime;
    
public:
    UPalArenaInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartInBattleTimer_ServerInternal();
    
private:
    UFUNCTION()
    void OnRep_AllIndividualCharacterParameters();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLoaded_ForClient() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFieldWarpPointLocation() const;
    
    UFUNCTION(BlueprintPure)
    FPalArenaRule GetArenaRule() const;
    
    UFUNCTION()
    FGuid GetArenaRoomId() const;
    
    UFUNCTION(BlueprintPure)
    APalArenaLevelInstance* GetArenaLevelInstance() const;
    
    UFUNCTION(BlueprintPure)
    EPalArenaInstanceState GetArenaInstanceState() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetArenaInstanceId() const;
    
};

