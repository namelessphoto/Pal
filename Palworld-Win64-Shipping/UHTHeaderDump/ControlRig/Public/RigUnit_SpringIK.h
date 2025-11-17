#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_SpringIK_DebugSettings.h"
#include "RigUnit_SpringIK_WorkData.h"
#include "RigUnit_SpringIK.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EndBone;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float HierarchyStrength;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float EffectorStrength;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float EffectorRatio;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float RootStrength;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float RootRatio;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PoleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipPolePlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigVectorKind PoleVectorKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PoleVectorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLiveSimulation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 Iterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitLocalPosition;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_SpringIK_DebugSettings DebugSettings;
    
    UPROPERTY(Transient)
    FRigUnit_SpringIK_WorkData WorkData;
    
    FRigUnit_SpringIK();
};

