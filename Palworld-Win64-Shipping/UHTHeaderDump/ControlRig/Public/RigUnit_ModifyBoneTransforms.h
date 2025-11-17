#pragma once
#include "CoreMinimal.h"
#include "EControlRigModifyBoneMode.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ModifyBoneTransforms_PerBone.h"
#include "RigUnit_ModifyBoneTransforms_WorkData.h"
#include "RigUnit_ModifyBoneTransforms.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float WeightMinimum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float WeightMaximum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EControlRigModifyBoneMode Mode;
    
    UPROPERTY(Transient)
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;
    
    FRigUnit_ModifyBoneTransforms();
};

