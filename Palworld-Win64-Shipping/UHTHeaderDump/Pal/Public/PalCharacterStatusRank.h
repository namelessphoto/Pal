#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationName.h"
#include "PalCharacterStatusRank.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStatusRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalCharacterStatusOperationName OperationName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Rank;
    
    PAL_API FPalCharacterStatusRank();
};

