#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "CollisionLimitDataBase.generated.h"

USTRUCT()
struct FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference DrivingBoneReference;
    
    UPROPERTY()
    FName DrivingBoneName;
    
    UPROPERTY()
    FVector OffsetLocation;
    
    UPROPERTY()
    FRotator OffsetRotation;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    FGuid Guid;
    
    KAWAIIPHYSICS_API FCollisionLimitDataBase();
};

