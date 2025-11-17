#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "PanelWidget.h"
#include "UniformGridPanel.generated.h"

class UUniformGridSlot;
class UWidget;

UCLASS()
class UMG_API UUniformGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin SlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredSlotWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredSlotHeight;
    
    UUniformGridPanel();

    UFUNCTION(BlueprintCallable)
    void SetSlotPadding(FMargin InSlotPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    
    UFUNCTION(BlueprintCallable)
    UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
};

