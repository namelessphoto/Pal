#ifndef UE4SS_SDK_EnhancedInput_HPP
#define UE4SS_SDK_EnhancedInput_HPP

#include "EnhancedInput_enums.hpp"

struct FBlueprintEnhancedInputActionBinding
{
    class UInputAction* InputAction;
    ETriggerEvent TriggerEvent;
    FName FunctionNameToBind;

};

struct FBlueprintInputDebugKeyDelegateBinding
{
    FInputChord InputChord;
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;
    bool bExecuteWhenPaused;

};

struct FEnhancedActionKeyMapping
{
    FPlayerMappableKeyOptions PlayerMappableOptions;
    TArray<class UInputTrigger*> Triggers;
    TArray<class UInputModifier*> Modifiers;
    class UInputAction* action;
    FKey Key;
    uint8 bIsPlayerMappable;
    uint8 bShouldBeIgnored;

};

struct FInjectedInputArray
{
};

struct FInputActionInstance
{
    class UInputAction* SourceAction;
    ETriggerEvent TriggerEvent;
    float LastTriggeredWorldTime;
    TArray<class UInputTrigger*> Triggers;
    TArray<class UInputModifier*> Modifiers;
    float ElapsedProcessedTime;
    float ElapsedTriggeredTime;

};

struct FInputActionValue
{
};

struct FInputComboStepData
{
    class UInputAction* ComboStepAction;
    float TimeToPressKey;

};

struct FMappingQueryIssue
{
    EMappingQueryIssue Issue;
    class UInputMappingContext* BlockingContext;
    class UInputAction* BlockingAction;

};

struct FModifyContextOptions
{
    uint8 bIgnoreAllPressedKeysUntilRelease;
    uint8 bForceImmediately;

};

struct FPlayerMappableKeyOptions
{
    class UObject* MetaData;
    FName Name;
    FText DisplayName;
    FText DisplayCategory;

};

class IEnhancedInputSubsystemInterface : public IInterface
{

    void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);
    int32 RemovePlayerMappedKey(const FName MappingName, const FModifyContextOptions& Options);
    void RemovePlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options);
    void RemoveMappingContext(const class UInputMappingContext* MappingContext, const FModifyContextOptions& Options);
    void RemoveAllPlayerMappedKeys(const FModifyContextOptions& Options);
    EMappingQueryResult QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, const class UInputMappingContext* InputContext, const class UInputAction* action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues);
    EMappingQueryResult QueryMapKeyInActiveContextSet(const class UInputMappingContext* InputContext, const class UInputAction* action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues);
    TArray<FKey> QueryKeysMappedToAction(const class UInputAction* action);
    void InjectInputVectorForAction(const class UInputAction* action, FVector Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void InjectInputForAction(const class UInputAction* action, FInputActionValue RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    bool HasMappingContext(const class UInputMappingContext* MappingContext, int32& OutFoundPriority);
    FKey GetPlayerMappedKey(const FName MappingName);
    TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
    void ClearAllMappings();
    int32 AddPlayerMappedKey(const FName MappingName, const FKey NewKey, const FModifyContextOptions& Options);
    void AddPlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options);
    void AddMappingContext(const class UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options);
};

class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;

};

class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
    TArray<FBlueprintEnhancedInputActionBinding> InputActionValueBindings;

};

class UEnhancedInputComponent : public UInputComponent
{

    FInputActionValue GetBoundActionValue(const class UInputAction* action);
};

class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
    FPerPlatformSettings PlatformSettings;
    bool bShouldOnlyTriggerLastActionInChord;

};

class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{

    void RequestRebuildControlMappingsUsingContext(const class UInputMappingContext* Context, bool bForceImmediately);
    FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType);
    FInputActionValue MakeInputActionValue(double X, double Y, double Z, const FInputActionValue& MatchValueType);
    FInputActionValue GetBoundActionValue(class AActor* Actor, const class UInputAction* action);
    FString Conv_InputActionValueToString(FInputActionValue ActionValue);
    bool Conv_InputActionValueToBool(FInputActionValue InValue);
    FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);
    FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);
    double Conv_InputActionValueToAxis1D(FInputActionValue InValue);
    void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type);
};

class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    FEnhancedInputLocalPlayerSubsystemControlMappingsRebuiltDelegate ControlMappingsRebuiltDelegate;
    void OnControlMappingsRebuilt();

};

class UEnhancedInputPlatformData : public UObject
{
    TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;

    class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);
};

class UEnhancedInputPlatformSettings : public UPlatformSettings
{
    TArray<TSoftClassPtr<UEnhancedInputPlatformData>> InputData;
    TArray<class TSubclassOf<UEnhancedInputPlatformData>> InputDataClasses;
    bool bShouldLogMappingContextRedirects;

};

class UEnhancedPlayerInput : public UPlayerInput
{
    TMap<UInputMappingContext*, int32> AppliedInputContexts;
    TArray<FEnhancedActionKeyMapping> EnhancedActionMappings;
    TMap<class UInputAction*, class FInputActionInstance> ActionInstanceData;
    TMap<class FKey, class FVector> KeysPressedThisTick;
    TMap<class UInputAction*, class FInjectedInputArray> InputsInjectedThisTick;
    TSet<UInputAction*> LastInjectedActions;

};

class UInputAction : public UDataAsset
{
    FText ActionDescription;
    bool bConsumeInput;
    bool bTriggerWhenPaused;
    bool bReserveAllMappings;
    EInputActionValueType ValueType;
    TArray<class UInputTrigger*> Triggers;
    TArray<class UInputModifier*> Modifiers;

};

class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;

};

class UInputMappingContext : public UDataAsset
{
    TArray<FEnhancedActionKeyMapping> Mappings;
    FText ContextDescription;

    void UnmapKey(const class UInputAction* action, FKey Key);
    void UnmapAllKeysFromAction(const class UInputAction* action);
    void UnmapAll();
    void UnmapAction(const class UInputAction* action);
    FEnhancedActionKeyMapping MapKey(const class UInputAction* action, FKey ToKey);
};

class UInputModifier : public UObject
{

    FInputActionValue ModifyRaw(const class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);
    FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);
};

class UInputModifierDeadZone : public UInputModifier
{
    float LowerThreshold;
    float UpperThreshold;
    EDeadZoneType Type;

};

class UInputModifierFOVScaling : public UInputModifier
{
    float FOVScale;
    EFOVScalingType FOVScalingType;

};

class UInputModifierNegate : public UInputModifier
{
    bool bX;
    bool bY;
    bool bZ;

};

class UInputModifierResponseCurveExponential : public UInputModifier
{
    FVector CurveExponent;

};

class UInputModifierResponseCurveUser : public UInputModifier
{
    class UCurveFloat* ResponseX;
    class UCurveFloat* ResponseY;
    class UCurveFloat* ResponseZ;

};

class UInputModifierScalar : public UInputModifier
{
    FVector Scalar;

};

class UInputModifierScaleByDeltaTime : public UInputModifier
{
};

class UInputModifierSmooth : public UInputModifier
{
};

class UInputModifierSwizzleAxis : public UInputModifier
{
    EInputAxisSwizzle Order;

};

class UInputModifierToWorldSpace : public UInputModifier
{
};

class UInputTrigger : public UObject
{
    float ActuationThreshold;
    bool bShouldAlwaysTick;
    FInputActionValue LastValue;

    ETriggerState UpdateState(const class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);
    bool IsActuated(const FInputActionValue& ForValue);
    ETriggerType GetTriggerType();
};

class UInputTriggerChordAction : public UInputTrigger
{
    class UInputAction* ChordAction;

};

class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
};

class UInputTriggerCombo : public UInputTrigger
{
    int32 CurrentComboStepIndex;
    float CurrentTimeBetweenComboSteps;
    TArray<FInputComboStepData> ComboActions;
    TArray<class UInputAction*> CancelActions;

};

class UInputTriggerDown : public UInputTrigger
{
};

class UInputTriggerHold : public UInputTriggerTimedBase
{
    float HoldTimeThreshold;
    bool bIsOneShot;

};

class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
    float HoldTimeThreshold;

};

class UInputTriggerPressed : public UInputTrigger
{
};

class UInputTriggerPulse : public UInputTriggerTimedBase
{
    bool bTriggerOnStart;
    float Interval;
    int32 TriggerLimit;

};

class UInputTriggerReleased : public UInputTrigger
{
};

class UInputTriggerTap : public UInputTriggerTimedBase
{
    float TapReleaseTimeThreshold;

};

class UInputTriggerTimedBase : public UInputTrigger
{
    float HeldDuration;
    bool bAffectedByTimeDilation;

};

class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
    FName ConfigName;
    FText ConfigDisplayName;
    bool bIsDeprecated;
    class UObject* MetaData;
    TMap<UInputMappingContext*, int32> Contexts;

    void ResetToDefault();
    bool IsDeprecated();
    TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();
    class UObject* GetMetadata();
    TMap<UInputMappingContext*, int32> GetMappingContexts();
    FEnhancedActionKeyMapping GetMappingByName(const FName MappingName);
    TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(const class UInputAction* InAction);
    FText GetDisplayName();
    FName GetConfigName();
};

#endif
