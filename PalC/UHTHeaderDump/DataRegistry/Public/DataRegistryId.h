#pragma once
#include "CoreMinimal.h"
#include "DataRegistryType.h"
#include "DataRegistryId.generated.h"

USTRUCT(BlueprintType)
struct FDataRegistryId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FDataRegistryType RegistryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName ItemName;
    
    DATAREGISTRY_API FDataRegistryId();
};

