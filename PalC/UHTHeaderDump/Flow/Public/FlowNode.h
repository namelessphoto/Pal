#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ConnectedPin.h"
#include "EFlowNodeState.h"
#include "EFlowOnScreenMessageType.h"
#include "EFlowPinActivationType.h"
#include "EFlowSignalMode.h"
#include "FlowNodeSaveData.h"
#include "FlowOutputPinHandle.h"
#include "FlowPin.h"
#include "FlowNode.generated.h"

class AActor;
class UEdGraphNode;
class UFlowAsset;
class UFlowNode;
class UFlowSubsystem;

UCLASS(Abstract, Blueprintable)
class FLOW_API UFlowNode : public UObject, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UEdGraphNode* GraphNode;
    
protected:
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EFlowSignalMode> AllowedSignalModes;
    
    UPROPERTY()
    EFlowSignalMode SignalMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FFlowPin> InputPins;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FFlowPin> OutputPins;
    
    UPROPERTY()
    TMap<FName, FConnectedPin> Connections;
    
    UPROPERTY(SaveGame)
    EFlowNodeState ActivationState;
    
public:
    UFlowNode();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerOutputPin(const FFlowOutputPinHandle Pin, const bool bFinish, const EFlowPinActivationType ActivationType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOutput(const FName& PinName, const bool bFinish, const EFlowPinActivationType ActivationType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerFirstOutput(const bool bFinish);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGuid(const FGuid& NewGuid);
    
    UFUNCTION(BlueprintCallable)
    void SaveInstance(FFlowNodeSaveData& NodeRecord);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSave();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPassThrough();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void LogWarning(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void LogNote(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void LogError(const FString& Message, const EFlowOnScreenMessageType OnScreenMessageType);
    
    UFUNCTION(BlueprintCallable)
    void LoadInstance(const FFlowNodeSaveData& NodeRecord);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_PreloadContent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnActivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_InitializeInstance();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString K2_GetStatusString() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_GetStatusBackgroundColor(FLinearColor& OutColor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString K2_GetNodeDescription() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UObject* K2_GetAssetToEdit();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString K2_GetAssetPath();
    
    UFUNCTION(BlueprintImplementableEvent)
    AActor* K2_GetActorToFocus();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ForceFinishNode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_FlushContent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ExecuteInput(const FName& PinName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_DeinitializeInstance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Cleanup();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_CanUserAddOutput() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_CanUserAddInput() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOutputConnected(const FName& PinName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputConnected(const FName& PinName) const;
    
    UFUNCTION(BlueprintPure)
    static FString GetProgressAsString(float Value);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetOutputNames() const;
    
    UFUNCTION(BlueprintPure)
    static FString GetNotifyTagsDescription(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetInputNames() const;
    
    UFUNCTION(BlueprintPure)
    static FString GetIdentityTagsDescription(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintPure)
    static FString GetIdentityTagDescription(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintPure)
    UFlowSubsystem* GetFlowSubsystem() const;
    
    UFUNCTION(BlueprintPure)
    UFlowAsset* GetFlowAsset() const;
    
    UFUNCTION(BlueprintPure)
    TSet<UFlowNode*> GetConnectedNodes() const;
    
    UFUNCTION(BlueprintPure)
    static FString GetClassDescription(const UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    

    // Fix for true pure virtual functions not being implemented
};

