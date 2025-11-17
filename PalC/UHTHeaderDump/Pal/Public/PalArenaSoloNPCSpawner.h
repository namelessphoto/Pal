#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalWazaID.h"
#include "PalCharacterStatusRank.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalArenaSoloNPCSpawner.generated.h"

class APalArenaSoloNPCSpawner;
class UObject;
class UPalIndividualCharacterHandle;

UCLASS()
class APalArenaSoloNPCSpawner : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnedAllDelegate, APalArenaSoloNPCSpawner*, Spawner);
    
    APalArenaSoloNPCSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void RequestSpawn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedAll();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawned(const UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintPure)
    int32 GetOtomoNum() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UPalIndividualCharacterHandle*> GetOtomoHandleList() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UPalIndividualCharacterHandle* GetNPCHandle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetInitializedOtomoSaveParameter(int32 Index, FPalIndividualCharacterSaveParameter& outParameter);
    
    UFUNCTION(BlueprintCallable)
    bool GetInitializedNPCSaveParameter(FPalIndividualCharacterSaveParameter& outParameter);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetInitializedCharacterSaveParemter(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, int32 TalentLevel, const TArray<EPalWazaID>& WazaList, const TArray<FPalDataTableRowName_PassiveSkillData>& PassiveSkillList, int32 Rank, const TArray<FPalCharacterStatusRank>& ArenaStatusRank, int32 FriendshipRank);
    
};

