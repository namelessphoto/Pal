#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "ControllerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UControllerComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UControllerComponent(const FObjectInitializer& ObjectInitializer);

};

