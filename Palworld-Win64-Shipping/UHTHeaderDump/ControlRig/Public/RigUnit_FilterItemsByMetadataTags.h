#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_FilterItemsByMetadataTags.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FilterItemsByMetadataTags : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Inclusive;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Result;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedIndices;
    
    FRigUnit_FilterItemsByMetadataTags();
};

