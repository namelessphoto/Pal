#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EPalKeyConfigAxisFilterType.h"
#include "EPalKeyConfigCategory.h"
#include "PalKeyConfigKeys.h"
#include "PalKeyConfigSettings.h"
#include "PalPlayerInput.generated.h"

UCLASS(NonTransient)
class UPalPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKeyConfigChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnKeyConfigChangedDelegate OnKeyConfigChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSet<FKey> EnableKeys;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<FKey> DisableKeys;
    
public:
    UPalPlayerInput();

    UFUNCTION(BlueprintCallable)
    bool UpdateActionMapping(const FName InActionName, const FPalKeyConfigKeys& NewKey, EPalKeyConfigCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void ResetAxisKey(const FName InAxisName, EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType);
    
    UFUNCTION(BlueprintCallable)
    void ResetActionKey(const FName InActionName, EPalKeyConfigCategory Category);
    
private:
    UFUNCTION()
    void OnChangeKeyConfig(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnableKey(FKey Key, EPalKeyConfigCategory InputType) const;
    
    UFUNCTION(BlueprintPure)
    void GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const;
    
    UFUNCTION(BlueprintCallable)
    FPalKeyConfigKeys GetAxisConfigKeys(const FName InAxisName, EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType);
    
    UFUNCTION(BlueprintPure)
    void GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const;
    
    UFUNCTION(BlueprintCallable)
    FPalKeyConfigKeys GetActionConfigKeys(const FName InActionName, EPalKeyConfigCategory Category);
    
private:
    UFUNCTION(BlueprintPure)
    void FiltterCategoryAxisMappings(EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType, TArray<FInputAxisKeyMapping>& Mappings) const;
    
    UFUNCTION(BlueprintPure)
    void FiltterCategoryActionMappings(EPalKeyConfigCategory Category, TArray<FInputActionKeyMapping>& Mappings) const;
    
};

