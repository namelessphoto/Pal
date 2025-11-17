#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalSpawnRadiusType.h"
#include "EPalSpawnedCharacterType.h"
#include "EPalSpawnerPlacementType.h"
#include "PalSpawnerPlacementDatabaseRow.generated.h"

class APalNPCSpawnerBase;

USTRUCT(BlueprintType)
struct FPalSpawnerPlacementDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString InstanceName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SpawnerName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalSpawnedCharacterType SpawnerType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalSpawnerPlacementType PlacementType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalSpawnRadiusType RadiusType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StaticRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WorldName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> LayerNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<APalNPCSpawnerBase> SpawnerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RespawnCoolTime;
    
    PAL_API FPalSpawnerPlacementDatabaseRow();
};

