#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalNPCTalkUIType.h"
#include "PalDataTableRowName_NPCAppearFlagData.h"
#include "PalEnemyCampStatus.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalInstanceID.h"
#include "PalNPCSpawnInfo.h"
#include "Templates/SubclassOf.h"
#include "PalNPCManager.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UDataTable;
class UNavigationQueryFilter;
class UPalIndividualCharacterHandle;
class UPalNPCMultiTalkHandle;
class UPalNPCTalkFlowAssetBase;
class UPalWildPalDrinkWaterSpotProvider;

UCLASS(BlueprintType)
class PAL_API UPalNPCManager : public UObject, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FNPCSpawnCallback, FPalInstanceID, ID);
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> AIOnNavMeshFilterClass;
    
private:
    UPROPERTY(Transient)
    TMap<UPalIndividualCharacterHandle*, FNPCSpawnCallback> CallbackMap;
    
    UPROPERTY(Transient)
    TMap<UPalIndividualCharacterHandle*, FPalNPCSpawnInfo> SpawnInfoMap;
    
    UPROPERTY(Transient)
    UPalWildPalDrinkWaterSpotProvider* DrinkWaterSpotProvider;
    
    UPROPERTY(Transient)
    TMap<FName, bool> RespawnDisableFlag;
    
    UPROPERTY(Transient)
    TArray<FName> NPCAppearFlagName;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalAIController> NPCAIControllerBaseClass;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* UniqueNPCDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NPCOneTalkDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NPCMultiTalkDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NPCTalkFlowDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalNPCTalkUIType, UDataTable*> TalkDataTableMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, EPalNPCTalkUIType> NPCNameTalkTypeMap;
    
public:
    UPalNPCManager();

private:
    UFUNCTION()
    void SpawNPCCallback(FPalInstanceID ID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNPCForServer(FPalNPCSpawnInfo SpawnInfo, UPalNPCManager::FNPCSpawnCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SetTrueNPCAppearFlag(FPalDataTableRowName_NPCAppearFlagData flagName);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyCampStatus(FName KeyName, FPalEnemyCampStatus EnemyCampStatus);
    
private:
    UFUNCTION()
    void RemoveGroupWhenDestoryActor(AActor* DestoryActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTransientTalkCount(APalCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsTalkable(APalCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    EPalNPCTalkUIType GetTalkUIType(APalCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    UPalNPCTalkFlowAssetBase* GetNPCTalkFlowAsset(APalCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCTalkDTFromTalkUIType(EPalNPCTalkUIType TalkUIType);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCOneTalkDTFromTalkId(FName TalkId);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCOneTalkDTFromCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UPalNPCMultiTalkHandle> GetNPCMultiTalkClassFromTalkId(FName TalkId);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UPalNPCMultiTalkHandle> GetNPCMultiTalkClass(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCCharacterTalkDT(FName CharacterID);
    
    UFUNCTION(BlueprintPure)
    FPalEnemyCampStatus GetEnemyCampStatus(FName KeyName) const;
    
    UFUNCTION(BlueprintPure)
    UPalWildPalDrinkWaterSpotProvider* GetDrinkWaterSpotProvider();
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterIDFromUniqueNPCID(FName UniqueNPCID);
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterIDFromCharacterIDAndUniqueNPCID(FName CharacterID, FName UniqueNPCID);
    
    UFUNCTION(BlueprintPure)
    bool GetCanSpawnByNPCAppearFlag(FPalDataTableRowName_NPCAppearFlagData flagName, bool FlagCondition);
    
private:
    UFUNCTION()
    void AllResetBossRespawnFlag();
    

    // Fix for true pure virtual functions not being implemented
};

