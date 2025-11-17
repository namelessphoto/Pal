#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalMapObjectOperationResult.h"
#include "PalUIBuildingModel.generated.h"

class UPalBaseCampModel;
class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUIBuildingModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName BuildObjectId;
    
public:
    UPalUIBuildingModel();

    UFUNCTION(BlueprintCallable)
    void ToggleChangeModeReplace();
    
    UFUNCTION(BlueprintPure)
    bool ShouldDisplayWarningForBuildObject() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldDisplayChangeBuildingModeGuide() const;
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FName InBuildObjectId);
    
    UFUNCTION(BlueprintCallable)
    void RotateTarget(const bool bRight);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSnapMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOutsideBaseCamp() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistBaseCamp();
    
    UFUNCTION(BlueprintPure)
    bool IsChangedMode() const;
    
    UFUNCTION(BlueprintPure)
    FText GetWarningText(const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxBuildingLimitNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuildingNum() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampModelForPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampModel(bool bIncludeForPlayer);
    
    UFUNCTION(BlueprintCallable)
    void FinishBuilding();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSnapMode(const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void ChangeModeReplace(const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMode(const bool bOn);
    
    UFUNCTION(BlueprintPure)
    bool CanChangeSnapModeForBuildObject() const;
    
    UFUNCTION(BlueprintPure)
    bool CanChangeReplaceModeForBuildObject() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildObject(const bool bContinuously);
    
};

