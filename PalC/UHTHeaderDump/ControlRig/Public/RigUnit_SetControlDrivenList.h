#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlDrivenList.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetControlDrivenList : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Driven;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_SetControlDrivenList();
};

