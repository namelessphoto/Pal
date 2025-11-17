#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

struct FChaosClothWeightedValue
{
    float Low;
    float High;

};

class UChaosClothConfig : public UClothConfigCommon
{
    EClothMassMode MassMode;
    float UniformMass;
    float TotalMass;
    float Density;
    float MinPerParticleMass;
    FChaosClothWeightedValue EdgeStiffnessWeighted;
    FChaosClothWeightedValue BendingStiffnessWeighted;
    bool bUseBendingElements;
    float BucklingRatio;
    FChaosClothWeightedValue BucklingStiffnessWeighted;
    FChaosClothWeightedValue AreaStiffnessWeighted;
    float VolumeStiffness;
    FChaosClothWeightedValue TetherStiffness;
    FChaosClothWeightedValue TetherScale;
    bool bUseGeodesicDistance;
    float ShapeTargetStiffness;
    float CollisionThickness;
    float FrictionCoefficient;
    bool bUseCCD;
    bool bUseSelfCollisions;
    float SelfCollisionThickness;
    float SelfCollisionFriction;
    bool bUseSelfIntersections;
    bool bUseLegacyBackstop;
    float DampingCoefficient;
    float LocalDampingCoefficient;
    bool bUsePointBasedWindModel;
    FChaosClothWeightedValue Drag;
    FChaosClothWeightedValue Lift;
    bool bUseGravityOverride;
    float GravityScale;
    FVector Gravity;
    FChaosClothWeightedValue Pressure;
    FChaosClothWeightedValue AnimDriveStiffness;
    FChaosClothWeightedValue AnimDriveDamping;
    FVector LinearVelocityScale;
    float AngularVelocityScale;
    float FictitiousAngularScale;
    bool bUseTetrahedralConstraints;
    bool bUseThinShellVolumeConstraints;
    bool bUseContinuousCollisionDetection;

};

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;
    int32 MaxIterationCount;
    int32 SubdivisionCount;
    bool bUseLocalSpaceSimulation;
    bool bUseXPBDConstraints;

};

class UChaosClothingInteractor : public UClothingInteractor
{

    void SetWind(FVector2D Drag, FVector2D Lift, float AirDensity, FVector WindVelocity);
    void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    void SetPressure(FVector2D Pressure);
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    void SetMaterial(FVector2D EdgeStiffness, FVector2D BendingStiffness, FVector2D AreaStiffness);
    void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);
    void SetLongRangeAttachment(FVector2D TetherStiffness, FVector2D TetherScale);
    void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);
    void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    void SetBackstop(bool bEnabled);
    void SetAnimDriveLinear(float AnimDriveStiffness);
    void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);
    void ResetAndTeleport(bool bReset, bool bTeleport);
};

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
};

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
};

#endif
