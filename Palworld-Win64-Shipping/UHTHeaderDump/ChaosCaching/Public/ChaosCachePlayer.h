#pragma once
#include "CoreMinimal.h"
#include "ChaosCacheManager.h"
#include "ChaosCachePlayer.generated.h"

UCLASS()
class CHAOSCACHING_API AChaosCachePlayer : public AChaosCacheManager {
    GENERATED_BODY()
public:
    AChaosCachePlayer(const FObjectInitializer& ObjectInitializer);

};

