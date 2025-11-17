#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "PanelWidget.h"
#include "WrapBox.generated.h"

class UWidget;
class UWrapBoxSlot;

UCLASS()
class UMG_API UWrapBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D InnerSlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WrapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplicitWrapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UWrapBox();

    UFUNCTION(BlueprintCallable)
    void SetInnerSlotPadding(FVector2D InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
    
};

