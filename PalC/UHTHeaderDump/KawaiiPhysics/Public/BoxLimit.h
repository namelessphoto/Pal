#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CollisionLimitBase.h"
#include "BoxLimit.generated.h"

USTRUCT(BlueprintType)
struct FBoxLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Extent;
    
    KAWAIIPHYSICS_API FBoxLimit();
};

