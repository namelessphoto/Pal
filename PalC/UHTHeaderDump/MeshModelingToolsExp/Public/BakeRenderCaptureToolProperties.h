#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeTextureResolution.h"
#include "EBakeTextureSamplesPerPixel.h"
#include "BakeRenderCaptureToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeRenderCaptureToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString MapPreview;
    
    UPROPERTY()
    TArray<FString> MapPreviewNamesList;
    
    UPROPERTY(EditAnywhere)
    EBakeTextureSamplesPerPixel SamplesPerPixel;
    
    UPROPERTY(EditAnywhere)
    EBakeTextureResolution TextureSize;
    
    UPROPERTY(EditAnywhere)
    float ValidSampleDepthThreshold;
    
    UBakeRenderCaptureToolProperties();

    UFUNCTION()
    TArray<FString> GetMapPreviewNamesFunc();
    
};

