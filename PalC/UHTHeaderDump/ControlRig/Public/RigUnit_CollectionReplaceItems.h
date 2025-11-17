#pragma once
#include "CoreMinimal.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionReplaceItems.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveInvalidItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowDuplicates;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection Collection;
    
    FRigUnit_CollectionReplaceItems();
};

