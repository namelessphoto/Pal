#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectPlayerSitLocationComponent.generated.h"

class UPalActionBase;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPlayerSitLocationComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> SitActionClass;
    
    UPalMapObjectPlayerSitLocationComponent(const FObjectInitializer& ObjectInitializer);

};

