#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PalUserWidget.h"
#include "PalUIRadialMenuWidgetBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIRadialMenuWidgetBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeSelectedIndexDelegate, int32, NewIndex, int32, prevIndex);
    
    UPROPERTY(BlueprintAssignable)
    FChangeSelectedIndexDelegate OnChangeSelectedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IgnoreMouseLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 menuNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 shiftDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float detectPadAxisBorder;
    
    UPROPERTY(BlueprintReadOnly)
    float nowArrowRadian;
    
    UPROPERTY(BlueprintReadOnly)
    int32 nowSelectedIndex;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> menuAreaStartRadian;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> menuAreaEndRadian;
    
public:
    UPalUIRadialMenuWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateSelectedIndex_ForPad();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedIndex_ForMouse(const FVector2D& MousePosition, const FVector2D& CenterPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedIndex_ForceAxis(const FVector2D& Axis);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndexForce(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    float RecalculateRadian(float inRadian);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearSelectedIndex();
    
    UFUNCTION(BlueprintCallable)
    void CalculateRadialMenuArea(float parentDegreeAngle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildRadialMenuWidget();
    
};

