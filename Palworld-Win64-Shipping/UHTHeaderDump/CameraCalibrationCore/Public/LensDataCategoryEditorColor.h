#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "LensDataCategoryEditorColor.generated.h"

USTRUCT()
struct FLensDataCategoryEditorColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor Focus;
    
    UPROPERTY(EditAnywhere)
    FColor Iris;
    
    UPROPERTY(EditAnywhere)
    FColor Zoom;
    
    UPROPERTY(EditAnywhere)
    FColor Distortion;
    
    UPROPERTY(EditAnywhere)
    FColor ImageCenter;
    
    UPROPERTY(EditAnywhere)
    FColor STMap;
    
    UPROPERTY(EditAnywhere)
    FColor NodalOffset;
    
    CAMERACALIBRATIONCORE_API FLensDataCategoryEditorColor();
};

