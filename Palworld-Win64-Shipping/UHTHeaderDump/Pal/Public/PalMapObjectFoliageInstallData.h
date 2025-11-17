#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalMapObjectFoliageInstallData.generated.h"

USTRUCT()
struct FPalMapObjectFoliageInstallData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName FoliageTypeName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector Location;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator Rotator;
    
    UPROPERTY(EditDefaultsOnly)
    FVector Scale3D;
    
    PAL_API FPalMapObjectFoliageInstallData();
};

