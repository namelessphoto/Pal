#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisStub -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "GameplayTagNetSerializerConfig.generated.h"

USTRUCT()
struct FGameplayTagNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYTAGS_API FGameplayTagNetSerializerConfig();
};

