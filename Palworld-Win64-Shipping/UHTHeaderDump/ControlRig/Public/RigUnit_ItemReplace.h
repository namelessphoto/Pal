#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemReplace.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemReplace : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName New;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKey Result;
    
    FRigUnit_ItemReplace();
};

