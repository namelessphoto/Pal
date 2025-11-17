#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectConcreteModelThrowableType.h"
#include "PalUIAimReticleMapObjectThrowableData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIAimReticleMapObjectThrowableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool isThrowable;
    
    UPROPERTY(BlueprintReadOnly)
    FName targetMapObjectID;
    
    UPROPERTY(BlueprintReadOnly)
    EPalMapObjectConcreteModelThrowableType throwableType;
    
    PAL_API FPalUIAimReticleMapObjectThrowableData();
};

