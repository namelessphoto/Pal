#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_RemoveMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_RemoveMetadata : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly)
    bool Removed;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    FRigUnit_RemoveMetadata();
};

