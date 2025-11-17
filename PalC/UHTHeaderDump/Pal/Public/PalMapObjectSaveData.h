#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelSaveData.h"
#include "PalMapObjectModelSaveData.h"
#include "PalMapObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MapObjectId;
    
    UPROPERTY()
    FPalMapObjectModelSaveData Model;
    
    UPROPERTY()
    FPalMapObjectConcreteModelSaveData ConcreteModel;
    
    PAL_API FPalMapObjectSaveData();
};

