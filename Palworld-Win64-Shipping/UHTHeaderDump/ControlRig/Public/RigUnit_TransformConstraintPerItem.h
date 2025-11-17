#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ConstraintTarget.h"
#include "ETransformSpaceMode.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_TransformConstraint_WorkData.h"
#include "RigUnit_TransformConstraintPerItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETransformSpaceMode BaseTransformSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform BaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey BaseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConstraintTarget> Targets;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bUseInitialTransforms;
    
private:
    UPROPERTY(Transient)
    FRigUnit_TransformConstraint_WorkData WorkData;
    
public:
    FRigUnit_TransformConstraintPerItem();
};

