#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "KawaiiPhysicsReference.generated.h"

USTRUCT(BlueprintType)
struct FKawaiiPhysicsReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    KAWAIIPHYSICS_API FKawaiiPhysicsReference();
};

