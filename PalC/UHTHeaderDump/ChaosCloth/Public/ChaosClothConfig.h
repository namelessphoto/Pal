#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConfigCommon -FallbackName=ClothConfigCommon
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=EClothMassMode -FallbackName=EClothMassMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosClothWeightedValue.h"
#include "ChaosClothConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothConfig : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EClothMassMode MassMode;
    
    UPROPERTY(EditAnywhere)
    float UniformMass;
    
    UPROPERTY(EditAnywhere)
    float TotalMass;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY()
    float MinPerParticleMass;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue EdgeStiffnessWeighted;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue BendingStiffnessWeighted;
    
    UPROPERTY(EditAnywhere)
    bool bUseBendingElements;
    
    UPROPERTY(EditAnywhere)
    float BucklingRatio;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue BucklingStiffnessWeighted;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue AreaStiffnessWeighted;
    
    UPROPERTY()
    float VolumeStiffness;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue TetherStiffness;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue TetherScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseGeodesicDistance;
    
    UPROPERTY()
    float ShapeTargetStiffness;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float FrictionCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUseCCD;
    
    UPROPERTY(EditAnywhere)
    bool bUseSelfCollisions;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionFriction;
    
    UPROPERTY(EditAnywhere)
    bool bUseSelfIntersections;
    
    UPROPERTY(EditAnywhere)
    bool bUseLegacyBackstop;
    
    UPROPERTY(EditAnywhere)
    float DampingCoefficient;
    
    UPROPERTY(EditAnywhere)
    float LocalDampingCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUsePointBasedWindModel;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue Drag;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue Lift;
    
    UPROPERTY(EditAnywhere)
    bool bUseGravityOverride;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue Pressure;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue AnimDriveStiffness;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue AnimDriveDamping;
    
    UPROPERTY(EditAnywhere)
    FVector LinearVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float FictitiousAngularScale;
    
    UPROPERTY()
    bool bUseTetrahedralConstraints;
    
    UPROPERTY()
    bool bUseThinShellVolumeConstraints;
    
    UPROPERTY()
    bool bUseContinuousCollisionDetection;
    
    UChaosClothConfig();

};

