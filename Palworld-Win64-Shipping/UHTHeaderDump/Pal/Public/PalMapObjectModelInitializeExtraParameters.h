#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameters.generated.h"

class UPalMapObjectModelInitializeExtraParameterBase;

USTRUCT(BlueprintType)
struct FPalMapObjectModelInitializeExtraParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UPalMapObjectModelInitializeExtraParameterBase*> Entries;
    
    UPROPERTY()
    bool bIgnoredSave;
    
    UPROPERTY()
    FGuid LevelObjectInstanceId;
    
    PAL_API FPalMapObjectModelInitializeExtraParameters();
};

