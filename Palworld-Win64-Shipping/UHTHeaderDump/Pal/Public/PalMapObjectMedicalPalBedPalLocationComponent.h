#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PalMapObjectMedicalPalBedPalLocationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectMedicalPalBedPalLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPalMapObjectMedicalPalBedPalLocationComponent(const FObjectInitializer& ObjectInitializer);

};

