#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalBossBattleSequenceType.h"
#include "PalBossBattleStaticInfo.h"
#include "PalBossBattleSequenceBase.generated.h"

class AActor;
class ALevelInstance;
class ALevelSequenceActor;
class APalPlayerCharacter;
class ULevelSequence;
class UPalBossBattleSequencer;

UCLASS(Blueprintable)
class UPalBossBattleSequenceBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSequenceFinishDelegate, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable)
    FSequenceFinishDelegate OnSequenceFinishDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalBossBattleSequenceType NextSequenceType;
    
public:
    UPalBossBattleSequenceBase();

    UFUNCTION(BlueprintNativeEvent)
    void TickSequence(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupLevelSequenceActor(ALevelSequenceActor* LevelSequenceActor, ULevelSequence* LevelSequence, ALevelInstance* LevelInstance);
    
    UFUNCTION(BlueprintCallable)
    void SelfFinish_ForBP();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginSequence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NoticeSequenceEnd_ToServer();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsServer();
    
protected:
    UFUNCTION(BlueprintPure)
    UPalBossBattleSequencer* GetOuterSequencer() const;
    
    UFUNCTION(BlueprintPure)
    APalPlayerCharacter* GetJoinedLocalControlPlayer();
    
    UFUNCTION(BlueprintPure)
    AActor* GetBossRoomSequenceRootActor(ALevelInstance* LevelInstance) const;
    
    UFUNCTION(BlueprintPure)
    FPalBossBattleStaticInfo GetBossBattleStaticInfo();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void FinishSequence(bool IsSuccess);
    
};

