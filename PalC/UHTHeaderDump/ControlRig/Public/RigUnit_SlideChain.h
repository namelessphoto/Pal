#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_SlideChain_WorkData.h"
#include "RigUnit_SlideChain.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlideAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_SlideChain_WorkData WorkData;
    
    FRigUnit_SlideChain();
};

