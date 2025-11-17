#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectPlayerBedParameterSceneComponent.generated.h"

class UPalActionBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPlayerBedParameterSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> SleepPlayerBedActionClass;
    
    UPalMapObjectPlayerBedParameterSceneComponent(const FObjectInitializer& ObjectInitializer);

};

