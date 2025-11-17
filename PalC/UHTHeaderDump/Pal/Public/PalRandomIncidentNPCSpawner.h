#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalOrganizationType.h"
#include "PalNPCSpawnerBase.h"
#include "PalRandomIncidentGroupRequestParameter.h"
#include "PalRandomIncidentSpawnMonsterData.h"
#include "PalRandomIncidentSpawnNPCData.h"
#include "PalRandomIncidentNPCSpawner.generated.h"

class AActor;
class APalCharacter;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalRandomIncidentNPCSpawner : public APalNPCSpawnerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCSpawned, const FName&, RowName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCDespawned, const FName&, RowName);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FNPCSpawned OnNPCSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FNPCDespawned OnNPCDespawnedDelegate;
    
private:
    UPROPERTY(Transient)
    TMap<int32, FGuid> GroupMap;
    
    UPROPERTY(Transient)
    TMap<EPalOrganizationType, FGuid> OrganizationGroupMap;
    
    UPROPERTY(Transient)
    TMap<int32, EPalOrganizationType> GrouplOrganizationMap;
    
public:
    APalRandomIncidentNPCSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnNPC(const FName& RowName, const FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMonster(const FName& RowName, const FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateGroups(const TArray<FPalRandomIncidentGroupRequestParameter>& RequestParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSpawnedCharacter(const UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSpawnedCharacters(TArray<AActor*>& SpawnedCharacters);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* FindIndividualCharacterHandleByName(const TMap<UPalIndividualCharacterHandle*, FName>& RowNames, const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APalCharacter* FindCharacterByName(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DespawnCharacters();
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacterByGroupNo(UPalIndividualCharacterHandle* AddIndividualHandle, int32 GroupNo);
    
};

