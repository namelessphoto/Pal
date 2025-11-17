#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SphericalPontoon.h"
#include "BuoyancyData.generated.h"

USTRUCT(BlueprintType)
struct FBuoyancyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSphericalPontoon> Pontoons;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCenterPontoonsOnCOM;
    
    UPROPERTY(EditDefaultsOnly)
    float BuoyancyCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float BuoyancyDamp;
    
    UPROPERTY(EditDefaultsOnly)
    float BuoyancyDamp2;
    
    UPROPERTY(EditDefaultsOnly)
    float BuoyancyRampMinVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float BuoyancyRampMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float BuoyancyRampMax;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxBuoyantForce;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyDragForcesInWater;
    
    UPROPERTY(EditDefaultsOnly)
    float DragCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float DragCoefficient2;
    
    UPROPERTY(EditDefaultsOnly)
    float AngularDragCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxDragSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyRiverForces;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RiverPontoonIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float WaterShorePushFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float RiverTraversalPathWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxShorePushForce;
    
    UPROPERTY(EditDefaultsOnly)
    float WaterVelocityStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxWaterForce;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAlwaysAllowLateralPush;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowCurrentWhenMovingFastUpstream;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyDownstreamAngularRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DownstreamAxisOfRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float DownstreamRotationStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float DownstreamRotationStiffness;
    
    UPROPERTY(EditDefaultsOnly)
    float DownstreamRotationAngularDamping;
    
    UPROPERTY(EditDefaultsOnly)
    float DownstreamMaxAcceleration;
    
    WATER_API FBuoyancyData();
};

