#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "RegionScaleFactors.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "SphericalPoseReaderDebugSettings.h"
#include "SphericalRegion.h"
#include "RigUnit_SphericalPoseReader.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float OutputParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey DriverItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DriverAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActiveRegionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRegionScaleFactors ActiveRegionScaleFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRegionScaleFactors FalloffRegionScaleFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlipWidthScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlipHeightScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey OptionalParentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSphericalPoseReaderDebugSettings Debug;
    
    UPROPERTY(Transient)
    FSphericalRegion InnerRegion;
    
    UPROPERTY(Transient)
    FSphericalRegion OuterRegion;
    
    UPROPERTY(Transient)
    FVector DriverNormal;
    
    UPROPERTY(Transient)
    FVector Driver2D;
    
    UPROPERTY()
    FCachedRigElement DriverCache;
    
    UPROPERTY()
    FCachedRigElement OptionalParentCache;
    
    UPROPERTY()
    FTransform LocalDriverTransformInit;
    
    UPROPERTY()
    FVector CachedRotationOffset;
    
    UPROPERTY()
    bool bCachedInitTransforms;
    
    FRigUnit_SphericalPoseReader();
};

