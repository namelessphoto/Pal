#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightingChannels -FallbackName=LightingChannels
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformFloat -FallbackName=PerPlatformFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "EGrassScaling.h"
#include "GrassVariety.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FGrassVariety {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* GrassMesh;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat GrassDensity;
    
    UPROPERTY(EditAnywhere)
    bool bUseGrid;
    
    UPROPERTY(EditAnywhere)
    float PlacementJitter;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt StartCullDistance;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt EndCullDistance;
    
    UPROPERTY(EditAnywhere)
    int32 MinLOD;
    
    UPROPERTY(EditAnywhere)
    EGrassScaling Scaling;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleZ;
    
    UPROPERTY(EditAnywhere)
    bool RandomRotation;
    
    UPROPERTY(EditAnywhere)
    bool AlignToSurface;
    
    UPROPERTY(EditAnywhere)
    bool bUseLandscapeLightmap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(EditAnywhere)
    bool bReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    bool bCastDynamicShadow;
    
    UPROPERTY(EditAnywhere)
    bool bCastContactShadow;
    
    UPROPERTY(EditAnywhere)
    bool bKeepInstanceBufferCPUCopy;
    
    UPROPERTY(EditAnywhere)
    uint32 InstanceWorldPositionOffsetDisableDistance;
    
    LANDSCAPE_API FGrassVariety();
};

