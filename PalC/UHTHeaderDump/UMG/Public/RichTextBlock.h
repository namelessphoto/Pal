#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextOverflowPolicy -FallbackName=ETextOverflowPolicy
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextTransformPolicy -FallbackName=ETextTransformPolicy
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "Templates/SubclassOf.h"
#include "TextLayoutWidget.h"
#include "RichTextBlock.generated.h"

class UDataTable;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class URichTextBlockDecorator;

UCLASS()
class UMG_API URichTextBlock : public UTextLayoutWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    UDataTable* TextStyleSet;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<URichTextBlockDecorator>> DecoratorClasses;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDefaultStyle;
    
    UPROPERTY(EditAnywhere)
    FTextBlockStyle DefaultTextStyleOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETextTransformPolicy TextTransformPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    ETextOverflowPolicy TextOverflowPolicy;
    
    UPROPERTY(Transient)
    FTextBlockStyle DefaultTextStyle;
    
    UPROPERTY(Transient)
    TArray<URichTextBlockDecorator*> InstanceDecorators;
    
public:
    URichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
    
    UFUNCTION(BlueprintCallable)
    void SetTextStyleSet(UDataTable* NewTextStyleSet);
    
    UFUNCTION(BlueprintCallable)
    void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetDecorators(const TArray<TSubclassOf<URichTextBlockDecorator>>& InDecoratorClasses);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoWrapText(bool InAutoTextWrap);
    
    UFUNCTION(BlueprintCallable)
    void RefreshTextLayout();
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetTextStyleSet() const;
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDefaultDynamicMaterial();
    
    UFUNCTION(BlueprintCallable)
    URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<URichTextBlockDecorator> DecoratorClass);
    
    UFUNCTION()
    void ClearAllDefaultStyleOverrides();
    
};

