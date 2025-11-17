#pragma once
#include "CoreMinimal.h"
#include "ERigMetadataType.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_FindItemsWithMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FindItemsWithMetadata : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigMetadataType Type;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Items;
    
    FRigUnit_FindItemsWithMetadata();
};

