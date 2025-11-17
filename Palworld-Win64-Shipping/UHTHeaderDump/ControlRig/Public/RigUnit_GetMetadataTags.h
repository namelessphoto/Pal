#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetMetadataTags.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetMetadataTags : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FName> Tags;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    FRigUnit_GetMetadataTags();
};

