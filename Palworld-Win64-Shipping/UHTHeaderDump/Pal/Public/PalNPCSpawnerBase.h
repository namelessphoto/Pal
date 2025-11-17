#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalCheckSpawnResultType.h"
#include "EPalOrganizationType.h"
#include "EPalSpawnRadiusType.h"
#include "EPalSpawnedCharacterType.h"
#include "EPalSpwnerImportanceType.h"
#include "FlagContainer.h"
#include "PalSpawnerGroupInfo.h"
#include "PalSpawnerOneTribeInfo.h"
#include "Templates/SubclassOf.h"
#include "PalNPCSpawnerBase.generated.h"

class APalNPCSpawnerBase;
class UObject;
class UPalIndividualCharacterHandle;
class UPalNavigationInvokerComponent;
class UPalSpawnerRuleObjectBase;
class UPalSquad;

UCLASS()
class PAL_API APalNPCSpawnerBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreatedGroupWithSelfDelegate, APalNPCSpawnerBase*, Spawner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreatedGroupDelegate);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bIsRunOnAnyThread;
    
    UPROPERTY(EditDefaultsOnly)
    bool Ignore_DebugSettingDisable;
    
    UPROPERTY(EditDefaultsOnly)
    bool Ignore_DistanceLocationReset;
    
    UPROPERTY(EditDefaultsOnly)
    bool Ignore_FarCheck;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDoSpawnedTick;
    
    UPROPERTY(EditDefaultsOnly)
    EPalSpawnRadiusType SpawnRadiusType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSquadBehaviour;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DebugOrganizationName;
    
    UPROPERTY(EditDefaultsOnly)
    float LocationResetDistance_SpawnerToCharacterTooFar;
    
    UPROPERTY(EditDefaultsOnly)
    float LocationResetHeight_SpawnerToCharacterTooLow;
    
    UPROPERTY(EditDefaultsOnly)
    FString GroupName;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool IgnoreBaseCampCheck;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> NPCLocations;
    
public:
    UPROPERTY(BlueprintAssignable)
    FCreatedGroupDelegate OnCreatedGroupDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCreatedGroupWithSelfDelegate OnCreatedGroupWithSelfDelegate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalSpawnerGroupInfo> RandomizeSpawnerGroupInfos;
    
private:
    UPROPERTY(Transient)
    FGuid WildGroupGuid;
    
    UPROPERTY(Transient)
    UPalSquad* Squad;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableSpawn;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalSpwnerImportanceType ImportanceType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalSpawnerRuleObjectBase> SpawnerRuleClass;
    
    UPROPERTY(Transient)
    UPalSpawnerRuleObjectBase* SpawnerRuleObjectInServer;
    
public:
    APalNPCSpawnerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void Tick_Spawning(float DeltaTime);
    
    UFUNCTION()
    void Tick_Spawned(float DeltaTime);
    
    UFUNCTION()
    void Tick_Despawning(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedFlag(bool NewIsSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnDisableFlag(const FName& Name, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRandomizer(bool bInIgnoreRandomizer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDisableBossSpawner_ToSaveData(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckRadius(float SpawnRadius, float DespawnRadius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAllNPCLocation();
    
    UFUNCTION(BlueprintCallable)
    void RequestDespawn();
    
    UFUNCTION(BlueprintCallable)
    void RequestDeleteGroup();
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateGroupByOrganizationType(EPalOrganizationType OrganizationType);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateGroup(TArray<FName> CharacterIDList);
    
public:
    UFUNCTION(BlueprintCallable)
    void Request_TickSpawningForGameThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Request_TickSpawnedForGameThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Request_TickDespawningForGameThread(float DeltaTime);
    
private:
    UFUNCTION()
    void RemoveGroupWhenDestoryActor(AActor* DestoryActor);
    
    UFUNCTION()
    void RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RandomSpawnLocationByRadiusLineTraceWithWorldLocation(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, const FVector& WorldPos, int32 SumSpawnNum, int32 SelfIndexInAll, bool IgnoreRaycast);
    
    UFUNCTION(BlueprintCallable)
    bool RandomSpawnLocationByRadiusLineTrace(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, int32 SumSpawnNum, int32 SelfIndexInAll, bool IgnoreRaycast);
    
    UFUNCTION(BlueprintCallable)
    void ProcessBossDefeatInfo_ServerInternal(AActor* BossActor, FName SpawnerName);
    
    UFUNCTION(BlueprintCallable)
    void PathWalkNameSort(TArray<UObject*> WalkPoint, TArray<UObject*>& OutSortedWalkPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialized();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsSuppressedByRandomIncident();
    
    UFUNCTION(BlueprintPure)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpawnDisable() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsNearBaseCamp();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsIgnoreRandomizer() const;
    
    UFUNCTION(BlueprintPure)
    EPalSpawnRadiusType GetSpawnRadiusType() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpawnRadiusCM() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetSpawnPointRadius();
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetSpawnNumRandom_OneTribe(FPalSpawnerOneTribeInfo Info);
    
    UFUNCTION(BlueprintPure)
    int32 GetSpawnLevelRandom_OneTribe(FPalSpawnerOneTribeInfo Info);
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FPalSpawnerGroupInfo> GetSpawnGroupList(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    EPalSpawnedCharacterType GetSpawnerType() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetSpawnerRadiusByType() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FName GetSpawnerName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSpawnDisableDebugInfo() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FPalSpawnerGroupInfo> GetOriginalSpawnGroupList() const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetMaxMonsterLevel() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetIsServer();
    
    UFUNCTION(BlueprintPure)
    bool GetDisableBossSpawnerFlag_FromSaveData(FName KeyName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetAllSpawnedNPCHandle(TArray<UPalIndividualCharacterHandle*>& Handles);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetAllNPCLocation(TArray<FVector>& OutLocations);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void CreateDebugSpawnerGroupInfo(FPalSpawnerGroupInfo OneGroupInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    EPalCheckSpawnResultType CheckSpawnDistance(bool NewIsSpawned);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintTick_Spawning(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintTick_Spawned(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintTick_Despawning(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintTick_AnyThread(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintTick(float DeltaTime);
    
    UFUNCTION()
    void AddGroupCharacterByGroupId(UPalIndividualCharacterHandle* AddIndividualHandle, const FGuid& GroupId, const FString& DebugName);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle);
    
};

