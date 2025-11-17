#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent
#include "ECalibrationPointVisualization.h"
#include "CalibrationPointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CAMERACALIBRATIONCORE_API UCalibrationPointComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FVector> SubPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bVisualizePointsInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointVisualizationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECalibrationPointVisualization> VisualizationShape;
    
    UCalibrationPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RebuildVertices();
    
    UFUNCTION(BlueprintPure)
    bool NamespacedSubpointName(const FString& InSubpointName, FString& OutNamespacedName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetWorldLocation(const FString& InPointName, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintPure)
    void GetNamespacedPointNames(TArray<FString>& OutNamespacedNames) const;
    
};

