#ifndef UE4SS_SDK_CommonGame_HPP
#define UE4SS_SDK_CommonGame_HPP

#include "CommonGame_enums.hpp"

struct FConfirmationDialogAction
{
    ECommonMessagingResult Result;
    FText OptionalDisplayText;

};

struct FMeasuredText
{
};

struct FRootViewportLayoutInfo
{
    class ULocalPlayer* LocalPlayer;
    class UPrimaryGameLayout* RootLayout;
    bool bAddedToViewport;

};

class ACommonPlayerController : public AModularPlayerController
{
};

class UAsyncAction_CreateWidgetAsync : public UCancellableAsyncAction
{
    FAsyncAction_CreateWidgetAsyncOnComplete OnComplete;
    void CreateWidgetAsyncDelegate(class UUserWidget* UserWidget);

    class UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<UUserWidget> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);
};

class UAsyncAction_PushContentToLayerForPlayer : public UCancellableAsyncAction
{
    FAsyncAction_PushContentToLayerForPlayerBeforePush BeforePush;
    void PushContentToLayerForPlayerAsyncDelegate(class UCommonActivatableWidget* UserWidget);
    FAsyncAction_PushContentToLayerForPlayerAfterPush AfterPush;
    void PushContentToLayerForPlayerAsyncDelegate(class UCommonActivatableWidget* UserWidget);

    class UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, FGameplayTag LayerName, bool bSuspendInputUntilComplete);
};

class UAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
    FAsyncAction_ShowConfirmationOnResult OnResult;
    void CommonMessagingResultMCDelegate(ECommonMessagingResult Result);
    class UObject* WorldContextObject;
    class ULocalPlayer* TargetLocalPlayer;
    class UCommonGameDialogDescriptor* Descriptor;

    class UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(class UObject* InWorldContextObject, FText Title, FText Message);
    class UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(class UObject* InWorldContextObject, FText Title, FText Message);
    class UAsyncAction_ShowConfirmation* ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Descriptor);
};

class UCommonGameDialog : public UCommonActivatableWidget
{
};

class UCommonGameDialogDescriptor : public UObject
{
    FText Header;
    FText Body;
    TArray<FConfirmationDialogAction> ButtonActions;

};

class UCommonGameInstance : public UGameInstance
{
    class UCommonSession_SearchResult* RequestedSession;

    void HandleSystemMessage(FGameplayTag MessageType, FText Title, FText Message);
    void HandlePrivilegeChanged(const class UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
};

class UCommonLocalPlayer : public ULocalPlayer
{
};

class UCommonMessagingSubsystem : public ULocalPlayerSubsystem
{
};

class UCommonPlayerInputKey : public UCommonUserWidget
{
    FName BoundAction;
    float AxisScale;
    FKey BoundKeyFallback;
    ECommonInputType InputTypeOverride;
    FName PresetNameOverride;
    ECommonKeybindForcedHoldStatus ForcedHoldKeybindStatus;
    bool bIsHoldKeybind;
    bool bShowKeybindBorder;
    FVector2D FrameSize;
    bool bShowTimeCountDown;
    FKey BoundKey;
    FSlateBrush HoldProgressBrush;
    FSlateBrush KeyBindTextBorder;
    bool bShowUnboundStatus;
    FSlateFontInfo KeyBindTextFont;
    FSlateFontInfo CountdownTextFont;
    FMeasuredText CountdownText;
    FMeasuredText KeybindText;
    FMargin KeybindTextPadding;
    FVector2D KeybindFrameMinimumSize;
    FName PercentageMaterialParameterName;
    class UMaterialInstanceDynamic* ProgressPercentageMID;
    FSlateBrush CachedKeyBrush;

    void UpdateKeybindWidget();
    void StopHoldProgress(FName HoldActionName, bool bCompletedSuccessfully);
    void StartHoldProgress(FName HoldActionName, float HoldDuration);
    void SetShowProgressCountDown(bool bShow);
    void SetPresetNameOverride(const FName NewValue);
    void SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus);
    void SetForcedHoldKeybind(bool InForcedHoldKeybind);
    void SetBoundKey(FKey NewBoundAction);
    void SetBoundAction(FName NewBoundAction);
    void SetAxisScale(const float NewValue);
    bool IsHoldKeybind();
    bool IsBoundKeyValid();
};

class UCommonUIExtensions : public UBlueprintFunctionLibrary
{

    FName SuspendInputForPlayer(class APlayerController* PlayerController, FName SuspendReason);
    void ResumeInputForPlayer(class APlayerController* PlayerController, FName SuspendToken);
    void PushStreamedContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetClass);
    class UCommonActivatableWidget* PushContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass);
    void PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget);
    bool IsOwningPlayerUsingTouch(const class UUserWidget* WidgetContextObject);
    bool IsOwningPlayerUsingGamepad(const class UUserWidget* WidgetContextObject);
    ECommonInputType GetOwningPlayerInputType(const class UUserWidget* WidgetContextObject);
    class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* PlayerController);
};

class UGameUIManagerSubsystem : public UGameInstanceSubsystem
{
    class UGameUIPolicy* CurrentPolicy;
    TSoftClassPtr<UGameUIPolicy> DefaultUIPolicyClass;

};

class UGameUIPolicy : public UObject
{
    TSoftClassPtr<UPrimaryGameLayout> LayoutClass;
    TArray<FRootViewportLayoutInfo> RootViewportLayouts;

};

class UPrimaryGameLayout : public UCommonUserWidget
{
    TMap<class FGameplayTag, class UCommonActivatableWidgetContainerBase*> Layers;

    void RegisterLayer(FGameplayTag LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget);
};

#endif
