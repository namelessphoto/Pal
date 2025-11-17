#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalRespawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FPalRespawnPointData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnPointID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ResourcesAbundant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalAbundant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ForPvP;
    
    PAL_API FPalRespawnPointData();
};

