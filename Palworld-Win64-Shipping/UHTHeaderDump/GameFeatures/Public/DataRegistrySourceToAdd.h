#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySourceToAdd.generated.h"

class UCurveTable;
class UDataTable;

USTRUCT(BlueprintType)
struct FDataRegistrySourceToAdd {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RegistryToAddTo;
    
    UPROPERTY(EditAnywhere)
    int32 AssetPriority;
    
    UPROPERTY(EditAnywhere)
    uint8 bClientSource: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bServerSource: 1;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDataTable> DataTableToAdd;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveTable> CurveTableToAdd;
    
    GAMEFEATURES_API FDataRegistrySourceToAdd();
};

