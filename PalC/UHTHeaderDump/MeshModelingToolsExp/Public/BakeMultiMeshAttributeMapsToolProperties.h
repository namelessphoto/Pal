#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeTextureBitDepth.h"
#include "EBakeTextureResolution.h"
#include "EBakeTextureSamplesPerPixel.h"
#include "BakeMultiMeshAttributeMapsToolProperties.generated.h"

class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MapTypes;
    
    UPROPERTY(EditAnywhere)
    FString MapPreview;
    
    UPROPERTY(EditAnywhere)
    EBakeTextureResolution Resolution;
    
    UPROPERTY(EditAnywhere)
    EBakeTextureBitDepth BitDepth;
    
    UPROPERTY(EditAnywhere)
    EBakeTextureSamplesPerPixel SamplesPerPixel;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UTexture2D* SampleFilterMask;
    
    UPROPERTY()
    TArray<FString> MapPreviewNamesList;
    
    UBakeMultiMeshAttributeMapsToolProperties();

    UFUNCTION()
    TArray<FString> GetMapPreviewNamesFunc();
    
};

