#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRFourPointBezier.h"
#include "CRSimLinearSpring.h"
#include "CRSimPoint.h"
#include "CRSimPointForce.h"
#include "CRSimSoftCollision.h"
#include "ECRSimPointIntegrateType.h"
#include "RigUnit_PointSimulation_BoneTarget.h"
#include "RigUnit_PointSimulation_DebugSettings.h"
#include "RigUnit_PointSimulation_WorkData.h"
#include "RigUnit_SimBaseMutable.h"
#include "RigUnit_PointSimulation.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCRSimPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCRSimLinearSpring> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCRSimPointForce> Forces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCRSimSoftCollision> CollisionVolumes;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float SimulatedStepsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ECRSimPointIntegrateType IntegratorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerletBlend;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitLocalPosition;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PrimaryAimAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondaryAimAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_PointSimulation_DebugSettings DebugSettings;
    
    UPROPERTY(BlueprintReadOnly)
    FCRFourPointBezier Bezier;
    
    UPROPERTY(Transient)
    FRigUnit_PointSimulation_WorkData WorkData;
    
    FRigUnit_PointSimulation();
};

