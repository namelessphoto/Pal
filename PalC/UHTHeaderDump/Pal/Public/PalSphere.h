#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalSphere.generated.h"

USTRUCT()
struct FPalSphere {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    bool bXY;
    
    PAL_API FPalSphere();
};

