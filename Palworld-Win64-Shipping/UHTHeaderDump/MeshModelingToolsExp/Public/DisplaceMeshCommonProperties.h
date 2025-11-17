#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDisplaceMeshToolDisplaceType.h"
#include "EDisplaceMeshToolSubdivisionType.h"
#include "DisplaceMeshCommonProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDisplaceMeshToolDisplaceType DisplacementType;
    
    UPROPERTY(EditAnywhere)
    float DisplaceIntensity;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(EditAnywhere)
    EDisplaceMeshToolSubdivisionType SubdivisionType;
    
    UPROPERTY(EditAnywhere)
    int32 Subdivisions;
    
    UPROPERTY(EditAnywhere)
    FName WeightMap;
    
    UPROPERTY()
    TArray<FString> WeightMapsList;
    
    UPROPERTY(EditAnywhere)
    bool bInvertWeightMap;
    
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bDisableSizeWarning;
    
    UDisplaceMeshCommonProperties();

    UFUNCTION()
    TArray<FString> GetWeightMapsFunc();
    
};

