#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "PalWorkFacingComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalWorkFacingComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalWorkFacingComponent(const FObjectInitializer& ObjectInitializer);

};

