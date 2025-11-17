#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalLogPriority.h"
#include "EPalLogWidgetOverrideClassType.h"
#include "PalKillLogDisplayData.h"
#include "PalLogAdditionalData.h"
#include "PalLogDataSet.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalLogManager.generated.h"

class UPalLogWidgetBase;
class UPalStaticLogCollector;

UCLASS(BlueprintType)
class PAL_API UPalLogManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemovedVeryImportantLogDelegate, const FGuid&, logId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAddedVeryImportantLogDelegate, const FGuid&, logId, const FText&, LogText, const FPalLogAdditionalData&, logAdditionalData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddedNormalLogDelegate, const FText&, LogText, const FPalLogAdditionalData&, logAdditionalData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddedKillLogDelegate, const FPalKillLogDisplayData&, KillLogData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddedImportantLogDelegate, const FText&, LogText, const FPalLogAdditionalData&, logAdditionalData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddedHardcorePlayerDeathLogDelegate, const FPalKillLogDisplayData&, DeathLogDisplayData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddedHardcorePalDeathLogDelegate, const FPalKillLogDisplayData&, DeathLogDisplayData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddedDeathLogDelegate, const FPalKillLogDisplayData&, DeathLogDisplayData);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float normalLogDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float importantLogDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float veryImportantLogDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeathLogShortDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeathLogLongDisplayTime;
    
protected:
    UPROPERTY()
    TMap<FGuid, FPalLogDataSet> veryImportantLogMap;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalStaticLogCollector> staticLogCollectorClass;
    
    UPROPERTY(BlueprintReadOnly)
    UPalStaticLogCollector* staticLogCollector;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalLogWidgetOverrideClassType, TSubclassOf<UPalLogWidgetBase>> OverrideClassMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedNormalLogDelegate OnAddedNormalLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedImportantLogDelegate OnAddedImportantLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedVeryImportantLogDelegate OnAddedVeryImportantLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FRemovedVeryImportantLogDelegate OnRemovedVeryImportantLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedDeathLogDelegate OnAddedDeathLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedKillLogDelegate OnAddedKillLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedHardcorePlayerDeathLogDelegate OnAddedHardcorePlayerDeathLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAddedHardcorePalDeathLogDelegate OnAddedHardcorePalDeathLogDelegate;
    
    UPalLogManager();

    UFUNCTION(BlueprintCallable)
    bool RemoveVeryImportantLog(const FGuid& targetLogId);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UPalLogWidgetBase> GetOverrideWidgetClassType(EPalLogWidgetOverrideClassType ClassType) const;
    
    UFUNCTION(BlueprintCallable)
    FGuid AddLog(EPalLogPriority logPriority, const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    
    UFUNCTION(BlueprintCallable)
    void AddKillLog(const FPalKillLogDisplayData& KillLogData);
    
    UFUNCTION(BlueprintCallable)
    void AddHardcorePlayerDeathLog(const FPalKillLogDisplayData& DeathLogDisplayData);
    
    UFUNCTION(BlueprintCallable)
    void AddHardcorePalDeathLog(const FPalKillLogDisplayData& DeathLogDisplayData);
    
    UFUNCTION(BlueprintCallable)
    void AddDeathLog(const FPalKillLogDisplayData& DeathLogDisplayData);
    
};

