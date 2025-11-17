#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBiomeType.h"
#include "PalInvaderStartPointInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalInvaderStartPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    EPalBiomeType BiomeType;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* SourceActor;
    
    PAL_API FPalInvaderStartPointInfo();
};

