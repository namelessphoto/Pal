#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AudioSliderBase.h"
#include "AudioFrequencySlider.generated.h"

UCLASS()
class AUDIOWIDGETS_API UAudioFrequencySlider : public UAudioSliderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D OutputRange;
    
    UAudioFrequencySlider();

};

