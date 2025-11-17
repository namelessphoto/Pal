#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "GameStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UGameStateComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UGameStateComponent(const FObjectInitializer& ObjectInitializer);

};

