#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalRandomIncidentSpawnLocationData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnLocationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D Location;
    
    PAL_API FPalRandomIncidentSpawnLocationData();
};

