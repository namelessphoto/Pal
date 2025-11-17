#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "FloatingObjectComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UFloatingObjectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UFloatingObjectComponent(const FObjectInitializer& ObjectInitializer);

};

