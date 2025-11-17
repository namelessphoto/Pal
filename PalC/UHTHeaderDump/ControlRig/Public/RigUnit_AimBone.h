#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "RigUnit_AimBone_Target.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_AimBone.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimBone_Target Primary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimBone_Target Secondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedBoneIndex;
    
    UPROPERTY()
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY()
    FCachedRigElement SecondaryCachedSpace;
    
    FRigUnit_AimBone();
};

