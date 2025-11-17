#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetControlDrivenList.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlDrivenList : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Driven;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlDrivenList();
};

