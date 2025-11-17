#pragma once
#include "CoreMinimal.h"
#include "PalBodyInstanceParameter.generated.h"

USTRUCT()
struct FPalBodyInstanceParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 InstanceBodyIndex;
    
    UPROPERTY()
    int16 InstanceBoneIndex;
    
    UPROPERTY()
    float LinearDamping;
    
    UPROPERTY()
    float AngularDamping;
    
    PAL_API FPalBodyInstanceParameter();
};

