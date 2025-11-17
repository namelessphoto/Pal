#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalUIPaldexDistributionLocationStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldexDistributionLocationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    PAL_API FPalUIPaldexDistributionLocationStruct();
};

