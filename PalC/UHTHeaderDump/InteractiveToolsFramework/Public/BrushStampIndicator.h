#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InteractiveGizmo.h"
#include "BrushStampIndicator.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushStampIndicator : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    float BrushRadius;
    
    UPROPERTY()
    float BrushFalloff;
    
    UPROPERTY()
    FVector BrushPosition;
    
    UPROPERTY()
    FVector BrushNormal;
    
    UPROPERTY()
    bool bDrawIndicatorLines;
    
    UPROPERTY()
    bool bDrawRadiusCircle;
    
    UPROPERTY()
    int32 SampleStepCount;
    
    UPROPERTY()
    FLinearColor LineColor;
    
    UPROPERTY()
    float LineThickness;
    
    UPROPERTY()
    bool bDepthTested;
    
    UPROPERTY()
    bool bDrawSecondaryLines;
    
    UPROPERTY()
    float SecondaryLineThickness;
    
    UPROPERTY()
    FLinearColor SecondaryLineColor;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* AttachedComponent;
    
    UBrushStampIndicator();

};

