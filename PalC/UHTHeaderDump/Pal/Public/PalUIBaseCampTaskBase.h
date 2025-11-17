#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampTaskCheckedData.h"
#include "PalBaseCampTaskDataSet.h"
#include "PalUserWidgetOverlayUI.h"
#include "Templates/SubclassOf.h"
#include "PalUIBaseCampTaskBase.generated.h"

class UPalBaseCampModel;
class UPalBaseCampTaskChecker;

UCLASS(EditInlineNew)
class PAL_API UPalUIBaseCampTaskBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalBaseCampTaskChecker> baseCampTaskCheckerClass;
    
private:
    UPROPERTY()
    FGuid BaseCampId;
    
    UPROPERTY()
    int32 lastCheckedBaseCampLevel;
    
    UPROPERTY()
    UPalBaseCampTaskChecker* taskChecker;
    
public:
    UPalUIBaseCampTaskBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryBaseCampLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetBaseCampID(const FGuid& TargetBaseCampID);
    
    UFUNCTION(BlueprintPure)
    bool IsWorkerCapacityLimited(int32 InLevel) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCampLevelMax();
    
    UFUNCTION(BlueprintPure)
    int32 GetWorkerMaxNum(int32 InLevel) const;
    
    UFUNCTION(BlueprintPure)
    bool GetNowLevelTaskData(FPalBaseCampTaskDataSet& outTaskData);
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampModel();
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseCampMaxNumInGuild(int32 InLevel) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampId();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTask(FPalBaseCampTaskCheckedData& outChedckedData);
    
};

