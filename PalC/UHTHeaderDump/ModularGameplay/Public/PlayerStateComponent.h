#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "PlayerStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UPlayerStateComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

};

