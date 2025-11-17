#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateSound -FallbackName=SlateSound
#include "CommonButtonStyleOptionalSlateSound.h"
#include "Templates/SubclassOf.h"
#include "CommonButtonStyle.generated.h"

class UCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class COMMONUI_API UCommonButtonStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSingleMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush SingleMaterialBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush NormalBase;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush NormalHovered;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush NormalPressed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush SelectedBase;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush SelectedHovered;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush SelectedPressed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush Disabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin ButtonPadding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin CustomPadding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 minHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> NormalTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> NormalHoveredTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> SelectedTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> SelectedHoveredTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> DisabledTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateSound HoveredSlateSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound;
    
    UCommonButtonStyle();

    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetSelectedTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetSelectedPressedBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetSelectedHoveredTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetSelectedHoveredBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    void GetSelectedBaseBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetNormalTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetNormalPressedBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetNormalHoveredTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetNormalHoveredBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    void GetNormalBaseBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    void GetMaterialBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetDisabledTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetDisabledBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomPadding(FMargin& OutCustomPadding) const;
    
    UFUNCTION(BlueprintPure)
    void GetButtonPadding(FMargin& OutButtonPadding) const;
    
};

