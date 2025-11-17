#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMetadataTagArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMetadataTagArray : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    FRigUnit_SetMetadataTagArray();
};

