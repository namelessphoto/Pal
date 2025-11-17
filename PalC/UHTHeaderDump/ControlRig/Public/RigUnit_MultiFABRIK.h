#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_MultiFABRIK_EndEffector.h"
#include "RigUnit_MultiFABRIK_WorkData.h"
#include "RigUnit_MultiFABRIK.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(Transient)
    FRigUnit_MultiFABRIK_WorkData WorkData;
    
    FRigUnit_MultiFABRIK();
};

