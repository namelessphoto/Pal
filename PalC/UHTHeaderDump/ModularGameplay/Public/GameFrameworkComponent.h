#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameFrameworkComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UGameFrameworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameFrameworkComponent(const FObjectInitializer& ObjectInitializer);

};

