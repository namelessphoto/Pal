#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
#include "PBIKBoneSetting.h"
#include "PBIKDebug.h"
#include "PBIKEffector.h"
#include "PBIKSolver.h"
#include "PBIKSolverSettings.h"
#include "RigUnit_PBIK.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPBIKEffector> Effectors;
    
    UPROPERTY(Transient)
    TArray<int32> EffectorSolverIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPBIKBoneSetting> BoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ExcludedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPBIKSolverSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPBIKDebug Debug;
    
    UPROPERTY(Transient)
    TArray<int32> BoneSettingToSolverBoneIndex;
    
    UPROPERTY(Transient)
    TArray<int32> SolverBoneToElementIndex;
    
    UPROPERTY(Transient)
    FPBIKSolver Solver;
    
    UPROPERTY(Transient)
    bool bNeedsInit;
    
    PBIK_API FRigUnit_PBIK();
};

