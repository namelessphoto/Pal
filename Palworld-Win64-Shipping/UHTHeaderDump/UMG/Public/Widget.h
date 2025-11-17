#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFlowDirectionPreference -FallbackName=EFlowDirectionPreference
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigationRule -FallbackName=EUINavigationRule
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "CustomWidgetNavigationDelegateDelegate.h"
#include "ESlateVisibility.h"
#include "EventReply.h"
#include "FieldNotificationId.h"
#include "FieldValueChangedDynamicDelegateDelegate.h"
#include "NotifyFieldValueChanged.h"
#include "Visual.h"
#include "WidgetTransform.h"
#include "Widget.generated.h"

class APlayerController;
class UGameInstance;
class ULocalPlayer;
class UObject;
class UPanelSlot;
class UPanelWidget;
class UPropertyBinding;
class USlateAccessibleWidgetData;
class UWidget;
class UWidgetNavigation;

UCLASS(Abstract, BlueprintType)
class UMG_API UWidget : public UVisual, public INotifyFieldValueChanged {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(FEventReply, FOnReply);
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FOnPointerEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);
    DECLARE_DYNAMIC_DELEGATE_RetVal(UWidget*, FGetWidget);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FGetText);
    DECLARE_DYNAMIC_DELEGATE_RetVal(ESlateVisibility, FGetSlateVisibility);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateColor, FGetSlateColor);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateBrush, FGetSlateBrush);
    DECLARE_DYNAMIC_DELEGATE_RetVal(TEnumAsByte<EMouseCursor>, FGetMouseCursor);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FGetLinearColor);
    DECLARE_DYNAMIC_DELEGATE_RetVal(int32, FGetInt32);
    DECLARE_DYNAMIC_DELEGATE_RetVal(float, FGetFloat);
    DECLARE_DYNAMIC_DELEGATE_RetVal(ECheckBoxState, FGetCheckBoxState);
    DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FGetBool);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FGenerateWidgetForString, const FString&, Item);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FGenerateWidgetForObject, UObject*, Item);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, TextExportTransient)
    UPanelSlot* Slot;
    
    UPROPERTY()
    FGetBool bIsEnabledDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ToolTipText;
    
    UPROPERTY()
    FGetText ToolTipTextDelegate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced, VisibleAnywhere)
    UWidget* ToolTipWidget;
    
    UPROPERTY()
    FGetWidget ToolTipWidgetDelegate;
    
    UPROPERTY()
    FGetSlateVisibility VisibilityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWidgetTransform RenderTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D RenderTransformPivot;
    
    UPROPERTY(EditAnywhere)
    EFlowDirectionPreference FlowDirectionPreference;
    
    UPROPERTY()
    uint8 bIsVariable: 1;
    
    UPROPERTY(Transient)
    uint8 bCreatedByConstructionScript: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_Cursor: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsVolatile: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMouseCursor> Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWidgetClipping Clipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlateVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RenderOpacity;
    
private:
    UPROPERTY(Instanced)
    USlateAccessibleWidgetData* AccessibleWidgetData;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetNavigation* Navigation;
    
protected:
    UPROPERTY(Transient)
    TArray<UPropertyBinding*> NativeBindings;
    
public:
    UWidget();

    UFUNCTION(BlueprintCallable)
    void SetVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetUserFocus(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTipText(const FText& InToolTipText);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTip(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTranslation(FVector2D Translation);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransformPivot(FVector2D Pivot);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransformAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransform(FWidgetTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderShear(FVector2D Shear);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderScale(FVector2D Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleCustomBoundary(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleCustom(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetClipping(EWidgetClipping InClipping);
    
    UFUNCTION(BlueprintCallable)
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void ResetCursor();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromParent();
    
    UFUNCTION(BlueprintCallable)
    void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FFieldValueChangedDynamicDelegate Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FFieldValueChangedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRendered() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsInViewport() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHovered() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateLayoutAndVolatility();
    
    UFUNCTION(BlueprintPure)
    bool HasUserFocusedDescendants(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintPure)
    bool HasUserFocus(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintPure)
    bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool HasMouseCapture() const;
    
    UFUNCTION(BlueprintPure)
    bool HasKeyboardFocus() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFocusedDescendants() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyUserFocus() const;
    
    UFUNCTION(BlueprintPure)
    ESlateVisibility GetVisibility() const;
    
    UFUNCTION(BlueprintPure)
    FGeometry GetTickSpaceGeometry() const;
    
    UFUNCTION(BlueprintPure)
    float GetRenderTransformAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetRenderOpacity() const;
    
    UFUNCTION(BlueprintPure)
    UPanelWidget* GetParent() const;
    
    UFUNCTION(BlueprintPure)
    FGeometry GetPaintSpaceGeometry() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    APlayerController* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    ULocalPlayer* GetOwningLocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsEnabled() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    UGameInstance* GetGameInstance() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetDesiredSize() const;
    
    UFUNCTION(BlueprintPure)
    EWidgetClipping GetClipping() const;
    
    UFUNCTION(BlueprintPure)
    FGeometry GetCachedGeometry() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAccessibleText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAccessibleSummaryText() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceVolatile(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ForceLayoutPrepass();
    

    // Fix for true pure virtual functions not being implemented
};

