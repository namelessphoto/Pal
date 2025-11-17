#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ETransformConstraintType -FallbackName=ETransformConstraintType
#include "TickableConstraint.h"
#include "TickableTransformConstraint.generated.h"

class UTransformableHandle;

UCLASS(Abstract)
class CONSTRAINTS_API UTickableTransformConstraint : public UTickableConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UTransformableHandle* ParentTRSHandle;
    
    UPROPERTY(BlueprintReadWrite)
    UTransformableHandle* ChildTRSHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainOffset;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDynamicOffset;
    
protected:
    UPROPERTY()
    ETransformConstraintType Type;
    
public:
    UTickableTransformConstraint();

};

