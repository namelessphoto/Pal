#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "WaterMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ForceCollapseDensityLevel;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* FarDistanceMaterial;
    
    UPROPERTY(EditAnywhere)
    float FarDistanceMeshExtent;
    
private:
    UPROPERTY(EditAnywhere)
    float TileSize;
    
    UPROPERTY(EditAnywhere)
    FIntPoint ExtentInTiles;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient)
    TSet<UMaterialInterface*> UsedMaterials;
    
    UPROPERTY(EditAnywhere)
    int32 TessellationFactor;
    
    UPROPERTY(EditAnywhere)
    float LODScale;
    
public:
    UWaterMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

