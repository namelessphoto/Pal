#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "PalMapObjectSpawnerForwardDirectionComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerForwardDirectionComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalMapObjectSpawnerForwardDirectionComponent(const FObjectInitializer& ObjectInitializer);

};

