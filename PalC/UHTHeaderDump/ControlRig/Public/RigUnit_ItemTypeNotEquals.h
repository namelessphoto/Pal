#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemTypeNotEquals.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey B;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_ItemTypeNotEquals();
};

