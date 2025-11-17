#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "ERigMetadataType.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_HasMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HasMetadata : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigMetadataType Type;
    
    UPROPERTY(BlueprintReadOnly)
    bool Found;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    FRigUnit_HasMetadata();
};

