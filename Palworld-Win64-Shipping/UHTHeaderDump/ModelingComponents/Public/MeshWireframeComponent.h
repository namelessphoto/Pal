#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "MeshWireframeComponent.generated.h"

class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODELINGCOMPONENTS_API UMeshWireframeComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LineDepthBias;
    
    UPROPERTY(EditAnywhere)
    float LineDepthBiasSizeScale;
    
    UPROPERTY(EditAnywhere)
    float ThicknessScale;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWireframe;
    
    UPROPERTY(EditAnywhere)
    FColor WireframeColor;
    
    UPROPERTY(EditAnywhere)
    float WireframeThickness;
    
    UPROPERTY(EditAnywhere)
    bool bEnableBoundaryEdges;
    
    UPROPERTY(EditAnywhere)
    FColor BoundaryEdgeColor;
    
    UPROPERTY(EditAnywhere)
    float BoundaryEdgeThickness;
    
    UPROPERTY(EditAnywhere)
    bool bEnableUVSeams;
    
    UPROPERTY(EditAnywhere)
    FColor UVSeamColor;
    
    UPROPERTY(EditAnywhere)
    float UVSeamThickness;
    
    UPROPERTY(EditAnywhere)
    bool bEnableNormalSeams;
    
    UPROPERTY(EditAnywhere)
    FColor NormalSeamColor;
    
    UPROPERTY(EditAnywhere)
    float NormalSeamThickness;
    
    UPROPERTY(EditAnywhere)
    bool bEnableColorSeams;
    
    UPROPERTY(EditAnywhere)
    FColor ColorSeamColor;
    
    UPROPERTY(EditAnywhere)
    float ColorSeamThickness;
    
private:
    UPROPERTY()
    UMaterialInterface* LineMaterial;
    
    UPROPERTY()
    FBoxSphereBounds LocalBounds;
    
public:
    UMeshWireframeComponent(const FObjectInitializer& ObjectInitializer);

};

