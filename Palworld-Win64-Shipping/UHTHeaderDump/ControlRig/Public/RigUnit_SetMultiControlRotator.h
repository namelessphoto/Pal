#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlRotator_Entry.h"
#include "RigUnit_SetMultiControlRotator.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlRotator : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    FRigUnit_SetMultiControlRotator();
};

