#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionReplaceItemsArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveInvalidItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowDuplicates;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Result;
    
    FRigUnit_CollectionReplaceItemsArray();
};

