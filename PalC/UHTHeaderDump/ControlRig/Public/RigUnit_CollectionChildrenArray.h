#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionChildrenArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecursive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType TypeToSearch;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Items;
    
    FRigUnit_CollectionChildrenArray();
};

