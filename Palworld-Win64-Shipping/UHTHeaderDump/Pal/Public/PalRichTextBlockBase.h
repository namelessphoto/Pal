#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonRichTextBlock -FallbackName=CommonRichTextBlock
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PalOptionUISettings.h"
#include "PalRichTextBlockBase.generated.h"

UCLASS()
class PAL_API UPalRichTextBlockBase : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle BindTextDatatableHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAutoTextSetWhenWidgetRebuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DefaultStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAutoAdjustScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FontSizeOverride_VeryLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreFontSizeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool JustificationVerticalCenter;
    
    UPalRichTextBlockBase();

protected:
    UFUNCTION()
    void SetText_GDKInternal(bool IsSuccess, const FString& OutString);
    
private:
    UFUNCTION()
    void OnUISettingChanged(const FPalOptionUISettings& PreSetting, const FPalOptionUISettings& NewSetting);
    
public:
    UFUNCTION(BlueprintPure)
    void Left(const int32 Count, FText& OutText);
    
    UFUNCTION(BlueprintPure)
    int32 GetTextLengthWithoutTag() const;
    
    UFUNCTION(BlueprintPure)
    FText GetBindedOriginalText() const;
    
};

