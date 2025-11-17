#pragma once
#include "CoreMinimal.h"
#include "PocketpairInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct POCKETPAIRUSER_API FPocketpairInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ItemId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Num;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> Token;
    
    FPocketpairInventoryItem();
};

