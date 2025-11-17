#pragma once
#include "CoreMinimal.h"
#include "PalUIAimReticleMapObjectAssignableData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIAimReticleMapObjectAssignableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool isAssignable;
    
    UPROPERTY(BlueprintReadOnly)
    FName targetMapObjectID;
    
    PAL_API FPalUIAimReticleMapObjectAssignableData();
};

