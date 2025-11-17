#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKeyCollection.h"
#include "RigUnit_CCDIK_RotationLimitPerItem.h"
#include "RigUnit_CCDIK_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_CCDIKPerItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform EffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bStartFromTail;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float BaseRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_CCDIK_WorkData WorkData;
    
    FRigUnit_CCDIKPerItem();
};

