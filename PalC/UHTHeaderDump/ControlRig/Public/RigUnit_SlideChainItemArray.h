#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_SlideChain_WorkData.h"
#include "RigUnit_SlideChainItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlideAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_SlideChain_WorkData WorkData;
    
    FRigUnit_SlideChainItemArray();
};

