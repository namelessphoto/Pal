#pragma once
#include "CoreMinimal.h"
#include "PocketpairInventoryItem.h"
#include "PocketpairPlatformID.h"
#include "PocketpairInventory.generated.h"

USTRUCT(BlueprintType)
struct POCKETPAIRUSER_API FPocketpairInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FPocketpairInventoryItem> Items;
    
    UPROPERTY(BlueprintReadOnly)
    FPocketpairPlatformID PlatformID;
    
    FPocketpairInventory();
};

