#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineMeshAxis -FallbackName=ESplineMeshAxis
#include "LandscapeSplineMeshOrientation.h"
#include "LandscapeSplineMeshEntry.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT()
struct FLandscapeSplineMeshEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UMaterialInterface*> MaterialOverrides;
    
    UPROPERTY(EditAnywhere)
    uint8 bCenterH: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D CenterAdjust;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleToWidth: 1;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY()
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis> ForwardAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis> UpAxis;
    
    LANDSCAPE_API FLandscapeSplineMeshEntry();
};

