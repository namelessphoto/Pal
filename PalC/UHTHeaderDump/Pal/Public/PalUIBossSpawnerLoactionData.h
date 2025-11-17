#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalUIBossSpawnerLoactionData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIBossSpawnerLoactionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SpawnerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    PAL_API FPalUIBossSpawnerLoactionData();
};

