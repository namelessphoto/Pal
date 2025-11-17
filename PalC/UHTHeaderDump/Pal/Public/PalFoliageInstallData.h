#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalFoliageInstallData.generated.h"

USTRUCT()
struct FPalFoliageInstallData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotator;
    
    UPROPERTY(EditAnywhere)
    FVector Scale3D;
    
    PAL_API FPalFoliageInstallData();
};

