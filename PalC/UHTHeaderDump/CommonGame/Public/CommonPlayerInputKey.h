#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonUserWidget -FallbackName=CommonUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "ECommonKeybindForcedHoldStatus.h"
#include "MeasuredText.h"
#include "CommonPlayerInputKey.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Abstract, EditInlineNew)
class COMMONGAME_API UCommonPlayerInputKey : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoundAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AxisScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey BoundKeyFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommonInputType InputTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PresetNameOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECommonKeybindForcedHoldStatus ForcedHoldKeybindStatus;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsHoldKeybind;
    
    UPROPERTY(Transient)
    bool bShowKeybindBorder;
    
    UPROPERTY(Transient)
    FVector2D FrameSize;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowTimeCountDown;
    
    UPROPERTY(BlueprintReadOnly)
    FKey BoundKey;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush HoldProgressBrush;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush KeyBindTextBorder;
    
    UPROPERTY(EditAnywhere)
    bool bShowUnboundStatus;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo KeyBindTextFont;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo CountdownTextFont;
    
    UPROPERTY(Transient)
    FMeasuredText CountdownText;
    
    UPROPERTY(Transient)
    FMeasuredText KeybindText;
    
    UPROPERTY(Transient)
    FMargin KeybindTextPadding;
    
    UPROPERTY(Transient)
    FVector2D KeybindFrameMinimumSize;
    
    UPROPERTY(EditDefaultsOnly)
    FName PercentageMaterialParameterName;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ProgressPercentageMID;
    
private:
    UPROPERTY(Transient)
    FSlateBrush CachedKeyBrush;
    
public:
    UCommonPlayerInputKey();

    UFUNCTION(BlueprintCallable)
    void UpdateKeybindWidget();
    
    UFUNCTION()
    void StopHoldProgress(FName HoldActionName, bool bCompletedSuccessfully);
    
    UFUNCTION()
    void StartHoldProgress(FName HoldActionName, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetShowProgressCountDown(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetNameOverride(const FName NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedHoldKeybind(bool InForcedHoldKeybind);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundKey(FKey NewBoundAction);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundAction(FName NewBoundAction);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisScale(const float NewValue);
    
    UFUNCTION(BlueprintPure)
    bool IsHoldKeybind() const;
    
    UFUNCTION()
    bool IsBoundKeyValid() const;
    
};

