#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionChainArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey FirstItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey LastItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Reverse;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Items;
    
    FRigUnit_CollectionChainArray();
};

