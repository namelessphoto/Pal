#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOptionWorldSettings.h"
#include "PalRandomizerSpawnInfoSaveData.h"
#include "PalSpawnerGroupInfo.h"
#include "PalSpawnerGroupInfoList.h"
#include "PalUIPaldexDistributionData.h"
#include "PalWorldSubsystem.h"
#include "PalRandomizerManager.generated.h"

class APalNPCSpawnerBase;
class UObject;
class UPalRandomizerManager;

UCLASS(BlueprintType)
class PAL_API UPalRandomizerManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, FPalSpawnerGroupInfoList> RegionRandomizeSpawnerList;
    
    UPROPERTY(Transient)
    TMap<FString, FPalSpawnerGroupInfoList> AllRandomizeSpawnerInstanceList;
    
    UPROPERTY(Transient)
    TMap<FName, FPalUIPaldexDistributionData> RegionRandomizeDistributionList;
    
    UPROPERTY(Transient)
    TMap<FName, FPalUIPaldexDistributionData> AllRandomizeDistributionList;
    
    UPROPERTY(Transient)
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerRegionHashList;
    
    UPROPERTY(Transient)
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerInstanceHashList;
    
public:
    UPalRandomizerManager();

private:
    UFUNCTION()
    void OnChangeWorldSettings_ForClient(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRandomizerPalLevelRandom() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInitializedRandomizer() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPalSpawnerGroupInfo> GetRandomSpawnerGroupInfoFromActor(APalNPCSpawnerBase* spawnerActor) const;
    
    UFUNCTION(BlueprintPure)
    bool GetRandomSpawnerGroupInfo(FName InSpawnerName, const FString& InInstanceName, TArray<FPalSpawnerGroupInfo>& OutGroupInfo) const;
    
    UFUNCTION(BlueprintPure)
    EPalRandomizerType GetRandomizerType() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRandomizerManager* GetRandomizerManagerFromContextObject(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPaldexDistributionData(FName InPalName, FPalUIPaldexDistributionData& OutPaldexDestributionData) const;
    
    UFUNCTION(BlueprintPure)
    FName GetImprisonmentBossRemap(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetFieldBossRemap(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDungeonLevel(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintPure)
    float GetCoolTime(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetBossRemap(FName InSpawnerName) const;
    

    // Fix for true pure virtual functions not being implemented
};

