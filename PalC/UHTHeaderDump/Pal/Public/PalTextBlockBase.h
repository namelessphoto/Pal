#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonTextBlock -FallbackName=CommonTextBlock
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PalOptionUISettings.h"
#include "PalTextBlockBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTextBlockBase : public UCommonTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle BindTextDatatableHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAutoTextSetWhenWidgetRebuilt;
    
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
    
    UPalTextBlockBase();

    UFUNCTION(BlueprintCallable)
    void UpdateRowName(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFontSize(const int32 NewSize);
    
protected:
    UFUNCTION()
    void SetText_GDKInternal(bool IsSuccess, const FString& OutString);
    
private:
    UFUNCTION()
    void OnUISettingChanged(const FPalOptionUISettings& PreSetting, const FPalOptionUISettings& NewSetting);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetBindedOriginalText() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool BP_ReflectText();
    
};

