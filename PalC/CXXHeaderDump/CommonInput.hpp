#ifndef UE4SS_SDK_CommonInput_HPP
#define UE4SS_SDK_CommonInput_HPP

#include "CommonInput_enums.hpp"

struct FCommonInputKeyBrushConfiguration
{
    FKey Key;
    FSlateBrush KeyBrush;

};

struct FCommonInputKeySetBrushConfiguration
{
    TArray<FKey> Keys;
    FSlateBrush KeyBrush;

};

struct FCommonInputPlatformBaseData
{
    ECommonInputType DefaultInputType;
    bool bSupportsMouseAndKeyboard;
    bool bSupportsGamepad;
    FName DefaultGamepadName;
    bool bCanChangeGamepadType;
    bool bSupportsTouch;
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;
    TArray<class TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;

};

struct FInputDeviceIdentifierPair
{
    FName InputDeviceName;
    FString HardwareDeviceIdentifier;

};

class UCommonInputActionDomain : public UDataAsset
{
    ECommonInputEventFlowBehavior Behavior;
    ECommonInputEventFlowBehavior InnerBehavior;
    bool bUseActionDomainDesiredInputConfig;
    ECommonInputMode InputMode;
    EMouseCaptureMode MouseCaptureMode;

};

class UCommonInputActionDomainTable : public UDataAsset
{
    TArray<class UCommonInputActionDomain*> ActionDomains;
    ECommonInputMode InputMode;
    EMouseCaptureMode MouseCaptureMode;

};

class UCommonInputBaseControllerData : public UObject
{
    ECommonInputType InputType;
    FName GamepadName;
    FText GamepadDisplayName;
    FText GamepadCategory;
    FText GamepadPlatformName;
    TArray<FInputDeviceIdentifierPair> GamepadHardwareIdMapping;
    TSoftObjectPtr<UTexture2D> ControllerTexture;
    TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture;
    TArray<FCommonInputKeyBrushConfiguration> InputBrushDataMap;
    TArray<FCommonInputKeySetBrushConfiguration> InputBrushKeySets;

    TArray<FName> GetRegisteredGamepads();
};

class UCommonInputPlatformSettings : public UPlatformSettings
{
    ECommonInputType DefaultInputType;
    bool bSupportsMouseAndKeyboard;
    bool bSupportsTouch;
    bool bSupportsGamepad;
    FName DefaultGamepadName;
    bool bCanChangeGamepadType;
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;
    TArray<class TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;

};

class UCommonInputSettings : public UDeveloperSettings
{
    TSoftClassPtr<UCommonUIInputData> InputData;
    FPerPlatformSettings PlatformInput;
    TMap<class FName, class FCommonInputPlatformBaseData> CommonInputPlatformData;
    bool bEnableInputMethodThrashingProtection;
    int32 InputMethodThrashingLimit;
    double InputMethodThrashingWindowInSeconds;
    double InputMethodThrashingCooldownInSeconds;
    bool bAllowOutOfFocusDeviceInput;
    bool bEnableDefaultInputConfig;
    TSoftObjectPtr<UCommonInputActionDomainTable> ActionDomainTable;
    TSubclassOf<class UCommonUIInputData> InputDataClass;
    class UCommonInputActionDomainTable* ActionDomainTablePtr;

};

class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
    FCommonInputSubsystemOnInputMethodChanged OnInputMethodChanged;
    void InputMethodChangedDelegate(ECommonInputType bNewInputType);
    int32 NumberOfInputMethodChangesRecently;
    double LastInputMethodChangeTime;
    double LastTimeInputMethodThrashingBegan;
    ECommonInputType LastInputType;
    ECommonInputType CurrentInputType;
    FName GamepadInputType;
    TMap<class FName, class ECommonInputType> CurrentInputLocks;
    class UCommonInputActionDomainTable* ActionDomainTable;
    bool bIsGamepadSimulatedClick;

    bool ShouldShowInputKeys();
    void SetGamepadInputType(const FName InGamepadInputType);
    void SetCurrentInputType(ECommonInputType NewInputType);
    bool IsUsingPointerInput();
    bool IsInputMethodActive(ECommonInputType InputMethod);
    ECommonInputType GetDefaultInputType();
    ECommonInputType GetCurrentInputType();
    FName GetCurrentGamepadName();
};

class UCommonUIInputData : public UObject
{
    FDataTableRowHandle DefaultClickAction;
    FDataTableRowHandle DefaultBackAction;

};

#endif
