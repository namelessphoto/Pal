#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemExists.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemExists : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadOnly)
    bool Exists;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    FRigUnit_ItemExists();
};

