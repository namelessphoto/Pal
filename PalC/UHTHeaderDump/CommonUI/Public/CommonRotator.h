#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "OnRotatedDelegate.h"
#include "CommonRotator.generated.h"

class UCommonTextBlock;

UCLASS(EditInlineNew)
class COMMONUI_API UCommonRotator : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnRotated OnRotated;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCommonTextBlock* MyText;
    
public:
    UCommonRotator();

    UFUNCTION(BlueprintCallable)
    void ShiftTextRight();
    
    UFUNCTION(BlueprintCallable)
    void ShiftTextLeft();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItem(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void PopulateTextLabels(TArray<FText> Labels);
    
    UFUNCTION(BlueprintPure)
    FText GetSelectedText() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedIndex() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOptionsPopulated(int32 Count);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOptionSelected(int32 Index);
    
};

