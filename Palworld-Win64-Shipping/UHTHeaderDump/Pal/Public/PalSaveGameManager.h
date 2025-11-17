#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=PocketpairUser -ObjectName=SocialId -FallbackName=SocialId
#include "EPalInLoadCollectionType.h"
#include "FlagContainer.h"
#include "PalAsyncSaveProcessParallel.h"
#include "PalContainerId.h"
#include "PalDynamicItemId.h"
#include "PalInstanceID.h"
#include "PalWorldBaseInfoData.h"
#include "PalSaveGameManager.generated.h"

class IPalGamePlayerDataSaveInterface;
class UPalGamePlayerDataSaveInterface;
class IPalGameWorldDataSaveInterface;
class UPalGameWorldDataSaveInterface;
class UPalAutoSaveDisabler;
class UPalLocalWorldSaveGame;
class UPalWorldOptionSaveGame;
class UPalWorldSaveGame;

UCLASS(BlueprintType, Config=Game)
class PAL_API UPalSaveGameManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartedWorldAutoSave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartedPlayerAutoSave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartedLocalWorldAutoSave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndedWorldAutoSave, bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndedPlayerAutoSave, bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndedLocalWorldAutoSave, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnStartedWorldAutoSave OnStartedWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnEndedWorldAutoSave OnEndedWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnStartedLocalWorldAutoSave OnStartedLocalWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnEndedLocalWorldAutoSave OnEndedLocalWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnStartedPlayerAutoSave OnStartedPlayerAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnEndedPlayerAutoSave OnEndedPlayerAutoSave;
    
private:
    UPROPERTY(Transient)
    UPalAutoSaveDisabler* DebugAutoSaveDisabler;
    
public:
    UPROPERTY(Transient)
    bool bIsFoundWorldSaveData;
    
    UPROPERTY(Transient)
    bool bIsFoundLocalWorldSaveData;
    
    UPROPERTY(Transient)
    bool bIsFoundWorldOptionSaveData;
    
private:
    UPROPERTY(Transient)
    bool bIsLoadedWorldSaveData;
    
    UPROPERTY(Transient)
    UPalWorldSaveGame* LoadedWorldSaveData;
    
    UPROPERTY(Transient)
    bool bIsLoadedLocalWorldSaveData;
    
    UPROPERTY(Transient)
    UPalLocalWorldSaveGame* LoadedLocalWorldSaveData;
    
    UPROPERTY(Transient)
    bool bIsLoadedWorldOptionSaveData;
    
    UPROPERTY(Transient)
    UPalWorldOptionSaveGame* LoadedWorldOptionSaveData;
    
    UPROPERTY(Transient)
    bool bLastSavedUsingMod;
    
    UPROPERTY()
    FTimerHandle AutoSaveWorldDataTimerHandle;
    
    UPROPERTY()
    FTimerHandle AutoSaveLocalWorldDataTimerHandle;
    
    UPROPERTY()
    FTimerHandle AutoGDKBackupTimerHandle;
    
    UPROPERTY(EditDefaultsOnly)
    FString AutoSaveWorldDefaultName;
    
    UPROPERTY()
    TArray<TScriptInterface<IPalGameWorldDataSaveInterface>> GameSavers;
    
    UPROPERTY()
    TScriptInterface<IPalGamePlayerDataSaveInterface> PlayerDataSaver;
    
    UPROPERTY(Transient)
    bool IsAppliedPlayerSaveData;
    
    UPROPERTY()
    FPalAsyncSaveProcessParallel WorldSaveProcess;
    
    UPROPERTY(Config)
    bool bIsForceDisableAutoSave;
    
    UPROPERTY(Config)
    bool bIsUseBackupSaveData;
    
    UPROPERTY(Config)
    int32 NearSaveBackupNum;
    
    UPROPERTY(Config)
    int32 MinutesSaveBackupNum;
    
    UPROPERTY(Config)
    int32 HourSaveBackupNum;
    
    UPROPERTY(Config)
    int32 DaySaveBackupNum;
    
    UPROPERTY(Transient)
    TMap<EPalInLoadCollectionType, FFlagContainer> bIsCollectIDInLoad;
    
    UPROPERTY(Transient)
    TSet<FPalInstanceID> UsedInstanceIDSetInLoad;
    
    UPROPERTY(Transient)
    TSet<FPalContainerId> UsedContainerIDSetInLoad;
    
    UPROPERTY(Transient)
    TSet<FPalDynamicItemId> UsedDynamicItemIDSetInLoad;
    
    UPROPERTY(Transient)
    int32 GDKMaxBackupSlotNum;
    
    UPROPERTY(Transient)
    int32 GDKBackupFrequency;
    
public:
    UPalSaveGameManager();

    UFUNCTION(BlueprintCallable)
    void StartWorldDataAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void StartLocalWorldDataAutoSave();
    
    UFUNCTION()
    bool OnFinishedWorldOptionAsyncSaveGamePreInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp);
    
    UFUNCTION()
    bool OnFinishedWorldAsyncSaveGamePreInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp);
    
    UFUNCTION()
    void OnFinishedWorldAsyncSaveGameInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp);
    
    UFUNCTION()
    bool OnFinishedGlobalPalStorageAsyncSaveGamePreInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& SaveDataName, const FString& Timestamp);
    
    UFUNCTION(BlueprintPure)
    bool IsWorldAutoSaving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidWorldSaveDirectoryName_LocalData(const FString& WorldSaveDirectoryName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidWorldSaveDirectoryName(const FString& WorldSaveDirectoryName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidWorldData(const FString& WorldName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidLocalWorldData(const FString& WorldName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocalWorldAutoSaving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoadedWorldOptionData() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoadedWorldData() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoadedLocalWorldData() const;
    
private:
    UFUNCTION()
    bool IsExistSocialId(FSocialId ID);
    
public:
    UFUNCTION(BlueprintPure)
    void IsAutoSaving(bool& OutValue) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAppliedPlayerData();
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetWorldNames() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FPalWorldBaseInfoData> GetWorldBaseInfoMap() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxWorldSaveDataNum() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorldSaveGame* GetLoadedWorldSaveData() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorldOptionSaveGame* GetLoadedWorldOptionSaveData() const;
    
    UFUNCTION(BlueprintPure)
    UPalLocalWorldSaveGame* GetLoadedLocalWorldSaveData() const;
    
    UFUNCTION(BlueprintPure)
    bool ForceLoadPerformanceChecktWorld() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAutoSaveEvents();
    
};

