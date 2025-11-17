#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "ECommonInputType.h"
#include "InputMethodChangedDelegateDelegate.h"
#include "CommonInputSubsystem.generated.h"

class UCommonInputActionDomainTable;

UCLASS(BlueprintType)
class COMMONINPUT_API UCommonInputSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FInputMethodChangedDelegate OnInputMethodChanged;
    
    UPROPERTY(Transient)
    int32 NumberOfInputMethodChangesRecently;
    
    UPROPERTY(Transient)
    double LastInputMethodChangeTime;
    
    UPROPERTY(Transient)
    double LastTimeInputMethodThrashingBegan;
    
    UPROPERTY(Transient)
    ECommonInputType LastInputType;
    
    UPROPERTY(Transient)
    ECommonInputType CurrentInputType;
    
    UPROPERTY(Transient)
    FName GamepadInputType;
    
    UPROPERTY(Transient)
    TMap<FName, ECommonInputType> CurrentInputLocks;
    
    UPROPERTY(Transient)
    UCommonInputActionDomainTable* ActionDomainTable;
    
    UPROPERTY(Transient)
    bool bIsGamepadSimulatedClick;
    
public:
    UCommonInputSubsystem();

    UFUNCTION(BlueprintPure)
    bool ShouldShowInputKeys() const;
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadInputType(const FName InGamepadInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInputType(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingPointerInput() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputMethodActive(ECommonInputType InputMethod) const;
    
    UFUNCTION(BlueprintPure)
    ECommonInputType GetDefaultInputType() const;
    
    UFUNCTION(BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentGamepadName() const;
    
};

