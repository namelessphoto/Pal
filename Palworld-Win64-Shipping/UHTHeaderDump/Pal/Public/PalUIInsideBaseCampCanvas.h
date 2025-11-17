#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalBaseCampPassiveEffectWorkHardType.h"
#include "EPalBaseCampWorkerDirectionBattleType.h"
#include "PalBaseCampTaskCheckedData.h"
#include "PalBaseCampTaskDataSet.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInsideBaseCampUI_DisplayItemInfo.h"
#include "PalUserWidget.h"
#include "Templates/SubclassOf.h"
#include "PalUIInsideBaseCampCanvas.generated.h"

class UPalBaseCampModel;
class UPalBaseCampTaskChecker;
class UPalIndividualCharacterSlot;
class UPalLogWidgetBase;
class UPalMapObjectBaseCampPassiveWorkHardModel;
class UPalMapObjectBaseCampWorkerDirectorModel;
class UPalMapObjectConcreteModelBase;

UCLASS(EditInlineNew)
class PAL_API UPalUIInsideBaseCampCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateInsideBaseCampWokerBattleType, EPalBaseCampWorkerDirectionBattleType, BattleType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeavePalBoxAreaDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterPalBoxAreaDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnEnterPalBoxAreaDelegate OnEnterPalBoxAreaDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLeavePalBoxAreaDelegate OnLeavePalBoxAreaDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateInsideBaseCampWokerBattleType OnUpdateInsideBaseCampWokerBattleType;
    
    UPROPERTY(BlueprintReadWrite)
    UPalBaseCampTaskChecker* taskChecker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float palboxAreaRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalLogWidgetBase> allTaskCompletedLogClass;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid lastInsideBaseCampID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, FPalInsideBaseCampUI_DisplayItemInfo> displayItemInfoMap;
    
    UPROPERTY()
    FPalBaseCampTaskCheckedData CachedTaskCheckData;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<UPalMapObjectBaseCampWorkerDirectorModel>> WeakBaseCampWorkerDirectorModelArray;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<UPalMapObjectBaseCampPassiveWorkHardModel>> WeakBaseCampWorkHardModelArray;
    
public:
    UPalUIInsideBaseCampCanvas();

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterTaskProgressEvent(const UPalBaseCampModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectedBaseCampWorkerInfo();
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedTaskCheckData();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveAllTaskCompletedLog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterTaskProgressEvent();
    
    UFUNCTION()
    void OnUpdateBaseCampWorkerDirectorBattleType(UPalMapObjectBaseCampWorkerDirectorModel* Model);
    
    UFUNCTION()
    void OnNotAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintPure)
    bool IsExistWorkHardModel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistWorkerDirectorModel() const;
    
    UFUNCTION(BlueprintPure)
    EPalBaseCampPassiveEffectWorkHardType GetWorkHardType() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTaskData(FPalBaseCampTaskDataSet& outTaskData);
    
    UFUNCTION(BlueprintPure)
    FGuid GetLocalPlayerGroupID() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel() const;
    
    UFUNCTION(BlueprintPure)
    void GetBaseCampPalSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots);
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseCampPalBedCount();
    
    UFUNCTION(BlueprintCallable)
    void CollectBaseCampWorkerInfo();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTask(FPalBaseCampTaskCheckedData& outCheckedData);
    
    UFUNCTION(BlueprintCallable)
    void CheckItemNum(TMap<FName, int64>& outItemNumMap, int64& outFoodNum);
    
    UFUNCTION(BlueprintCallable)
    void CheckInsidePalBox();
    
};

