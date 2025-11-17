#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKey.h"
#include "RigUnit_FABRIK_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_FABRIKItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform EffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(Transient)
    FRigUnit_FABRIK_WorkData WorkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetEffectorTransform;
    
    FRigUnit_FABRIKItemArray();
};

