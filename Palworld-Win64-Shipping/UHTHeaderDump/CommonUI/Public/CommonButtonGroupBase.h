#pragma once
#include "CoreMinimal.h"
#include "CommonWidgetGroupBase.h"
#include "OnSelectionClearedDelegate.h"
#include "SimpleButtonBaseGroupDelegateDelegate.h"
#include "CommonButtonGroupBase.generated.h"

class UCommonButtonBase;

UCLASS()
class COMMONUI_API UCommonButtonGroupBase : public UCommonWidgetGroupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleButtonBaseGroupDelegate OnSelectedButtonBaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleButtonBaseGroupDelegate OnHoveredButtonBaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleButtonBaseGroupDelegate OnButtonBaseClicked;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleButtonBaseGroupDelegate OnButtonBaseDoubleClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectionCleared OnSelectionCleared;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSelectionRequired;
    
public:
    UCommonButtonGroupBase();

    UFUNCTION(BlueprintCallable)
    void SetSelectionRequired(bool bRequireSelection);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound);
    
protected:
    UFUNCTION()
    void OnSelectionStateChangedBase(UCommonButtonBase* BaseButton, bool bIsSelected);
    
    UFUNCTION()
    void OnHandleButtonBaseDoubleClicked(UCommonButtonBase* BaseButton);
    
    UFUNCTION()
    void OnHandleButtonBaseClicked(UCommonButtonBase* BaseButton);
    
    UFUNCTION()
    void OnButtonBaseUnhovered(UCommonButtonBase* BaseButton);
    
    UFUNCTION()
    void OnButtonBaseHovered(UCommonButtonBase* BaseButton);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAnyButtons() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedButtonIndex() const;
    
    UFUNCTION(BlueprintPure)
    UCommonButtonBase* GetSelectedButtonBase() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHoveredButtonIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetButtonCount() const;
    
    UFUNCTION(BlueprintPure)
    UCommonButtonBase* GetButtonBaseAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindButtonIndex(const UCommonButtonBase* ButtonToFind) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAll();
    
};

