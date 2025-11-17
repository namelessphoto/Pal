#pragma once
#include "CoreMinimal.h"
#include "EControlRigModifyBoneMode.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ModifyTransforms_PerItem.h"
#include "RigUnit_ModifyTransforms_WorkData.h"
#include "RigUnit_ModifyTransforms.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float WeightMinimum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float WeightMaximum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EControlRigModifyBoneMode Mode;
    
    UPROPERTY(Transient)
    FRigUnit_ModifyTransforms_WorkData WorkData;
    
    FRigUnit_ModifyTransforms();
};

