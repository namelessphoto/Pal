#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalItemRecipe.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIProductSettingModel.generated.h"

class UPalItemContainerMultiHelper;
class UPalMapObjectConcreteModelBase;
class UPalUIProductSettingModel;

UCLASS(BlueprintType)
class UPalUIProductSettingModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSettingDelegate, UPalUIProductSettingModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSettingDelegate OnUpdateRecipeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSettingDelegate OnUpdateProductNumDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSettingDelegate OnUpdateDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TargetMapObjectName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName SelectedRecipeId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName FocusedRecipeId;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 ProductNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TWeakObjectPtr<UPalMapObjectConcreteModelBase> WeakOwnerConcreteModel;
    
public:
    UPalUIProductSettingModel();

    UFUNCTION(BlueprintCallable)
    void SetProductNumByInput(int32 InputNum);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedRecipe(const FName RecipeID);
    
    UFUNCTION(BlueprintCallable)
    void SelectRecipe(const FName RecipeID);
    
    UFUNCTION(BlueprintCallable)
    void ResetProductNum();
    
private:
    UFUNCTION()
    void OnUpdateInventory(UPalItemContainerMultiHelper* IInventoryContainers);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyUpdateForce();
    
    UFUNCTION(BlueprintPure)
    bool IsProductNumInfinite() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseProductNum();
    
    UFUNCTION(BlueprintCallable)
    void GetRequiredMaterialInfos(TArray<FPalStaticItemIdAndNum>& RequiredMaterialInfos, bool OneUnit);
    
    UFUNCTION(BlueprintPure)
    FName GetRecipeId() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemRecipe GetRecipe() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetProductNum() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseProductNum();
    
    UFUNCTION(BlueprintPure)
    float CalcWorkAmount() const;
    
    UFUNCTION(BlueprintPure)
    int32 CalcMaxProductableNum();
    
    UFUNCTION(BlueprintPure)
    int32 CalcConsumeEnergy() const;
    
};

