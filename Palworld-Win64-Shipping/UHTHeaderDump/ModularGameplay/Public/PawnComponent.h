#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "PawnComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UPawnComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPawnComponent(const FObjectInitializer& ObjectInitializer);

};

