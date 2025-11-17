#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalBuildResultParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildResultParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector InstallLocation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentBuildingNum;
    
    PAL_API FPalBuildResultParameter();
};

