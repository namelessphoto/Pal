#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "PalMapObjectAmusementCharacterLocationComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectAmusementCharacterLocationComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalMapObjectAmusementCharacterLocationComponent(const FObjectInitializer& ObjectInitializer);

};

