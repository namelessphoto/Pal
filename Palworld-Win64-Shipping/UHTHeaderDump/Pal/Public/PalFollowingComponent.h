#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
#include "PalFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UPalFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

