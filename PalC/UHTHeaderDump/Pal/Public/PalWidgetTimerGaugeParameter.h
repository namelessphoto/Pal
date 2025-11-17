#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalHUDDispatchParameterBase.h"
#include "PalWidgetTimerGaugeParameter.generated.h"

UCLASS(BlueprintType)
class UPalWidgetTimerGaugeParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName bindActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHide;
    
    UPalWidgetTimerGaugeParameter();

};

