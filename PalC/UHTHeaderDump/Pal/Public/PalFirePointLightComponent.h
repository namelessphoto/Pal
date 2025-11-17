#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "PalFirePointLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFirePointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPalFirePointLightComponent(const FObjectInitializer& ObjectInitializer);

};

