#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUIItemChestFilterMulticastDelegateDelegate.h"
#include "PalUIItemChestFilterModel.generated.h"

class IPalMapObjectItemContainerAccessInterface;
class UPalMapObjectItemContainerAccessInterface;
class UPalItemContainer;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemContainerModule;

UCLASS(BlueprintType)
class PAL_API UPalUIItemChestFilterModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalUIItemChestFilterMulticastDelegate OnUpdateFilterPreferenceDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TWeakObjectPtr<UPalMapObjectConcreteModelBase> WeakTargetModel;
    
public:
    UPalUIItemChestFilterModel();

    UFUNCTION(BlueprintCallable)
    void Setup(UPalMapObjectConcreteModelBase* InConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeFilter(const FName InFilterName, const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestAllUncheck();
    
    UFUNCTION(BlueprintCallable)
    void RequestAllCheck();
    
private:
    UFUNCTION()
    void OnUpdateFilterPreference(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintPure)
    UPalMapObjectItemContainerModule* GetItemContainerModule() const;
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IPalMapObjectItemContainerAccessInterface> GetItemContainerAccess() const;
    
    UFUNCTION(BlueprintPure)
    UPalItemContainer* GetItemContainer() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FName, FName> GetFilterIdAndDisplayTextId() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
};

