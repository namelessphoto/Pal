#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKey -FallbackName=RigElementKey
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
#include "FBIKConstraintOption.h"
#include "FBIKDebugOption.h"
#include "FBIKEndEffector.h"
#include "MotionProcessInput.h"
#include "RigUnit_FullbodyIK_WorkData.h"
#include "SolverInput.h"
#include "RigUnit_FullbodyIK.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRigElementKey Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FFBIKEndEffector> Effectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FFBIKConstraintOption> Constraints;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSolverInput SolverProperty;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FMotionProcessInput MotionProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFBIKDebugOption DebugOption;
    
    UPROPERTY(Transient)
    FRigUnit_FullbodyIK_WorkData WorkData;
    
    FULLBODYIK_API FRigUnit_FullbodyIK();
};

