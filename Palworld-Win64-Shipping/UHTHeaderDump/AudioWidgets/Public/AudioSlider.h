#pragma once
#include "CoreMinimal.h"
#include "AudioSliderBase.h"
#include "AudioSlider.generated.h"

class UCurveFloat;

UCLASS()
class AUDIOWIDGETS_API UAudioSlider : public UAudioSliderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UCurveFloat> LinToOutputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UCurveFloat> OutputToLinCurve;
    
    UAudioSlider();

};

