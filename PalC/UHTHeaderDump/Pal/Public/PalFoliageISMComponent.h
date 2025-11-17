#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Foliage -ObjectName=FoliageInstancedStaticMeshComponent -FallbackName=FoliageInstancedStaticMeshComponent
#include "PalFoliageISMComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFoliageISMComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalFoliageISMComponent(const FObjectInitializer& ObjectInitializer);

};

