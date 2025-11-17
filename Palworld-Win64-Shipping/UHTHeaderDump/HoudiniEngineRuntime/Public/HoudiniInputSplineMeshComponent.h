#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineMeshAxis -FallbackName=ESplineMeshAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshParams -FallbackName=SplineMeshParams
#include "HoudiniInputMeshComponent.h"
#include "HoudiniInputSplineMeshComponent.generated.h"

class UStaticMesh;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSplineMeshComponent : public UHoudiniInputMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGuid MeshPackageGuid;
    
    UPROPERTY()
    UStaticMesh* GeneratedMesh;
    
    UPROPERTY()
    TEnumAsByte<ESplineMeshAxis> CachedForwardAxis;
    
    UPROPERTY()
    FSplineMeshParams CachedSplineParams;
    
    UPROPERTY()
    FVector CachedSplineUpDir;
    
    UPROPERTY()
    float CachedSplineBoundaryMax;
    
    UPROPERTY()
    float CachedSplineBoundaryMin;
    
    UPROPERTY()
    uint8 CachedbSmoothInterpRollScale: 1;
    
public:
    UHoudiniInputSplineMeshComponent();

};

