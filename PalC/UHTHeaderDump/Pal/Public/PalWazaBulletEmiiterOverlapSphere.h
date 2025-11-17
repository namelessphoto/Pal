#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWazaBulletEmiiterOverlapSphere.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaBulletEmiiterOverlapSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector RelativeLocationFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Radius;
    
    PAL_API FPalWazaBulletEmiiterOverlapSphere();
};

