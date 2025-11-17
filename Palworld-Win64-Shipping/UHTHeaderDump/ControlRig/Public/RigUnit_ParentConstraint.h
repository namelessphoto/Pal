#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
#include "CachedRigElement.h"
#include "ConstraintParent.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ParentConstraint_AdvancedSettings.h"
#include "RigUnit_ParentConstraint.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransformFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConstraintParent> Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY()
    FCachedRigElement ChildCache;
    
    UPROPERTY()
    TArray<FCachedRigElement> ParentCaches;
    
    CONTROLRIG_API FRigUnit_ParentConstraint();
};

