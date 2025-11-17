#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "PalMapObjectSpawnerMultiItemLocationComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerMultiItemLocationComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalMapObjectSpawnerMultiItemLocationComponent(const FObjectInitializer& ObjectInitializer);

};

