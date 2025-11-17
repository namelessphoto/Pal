#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "ECollisionSourceType.h"
#include "CollisionLimitBase.generated.h"

USTRUCT()
struct FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator OffsetRotation;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    bool bEnable;
    
    UPROPERTY(VisibleAnywhere)
    ECollisionSourceType SourceType;
    
    KAWAIIPHYSICS_API FCollisionLimitBase();
};

