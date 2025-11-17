#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "FlagContainer.h"
#include "PalTimerPointLightComponent.generated.h"

class APalCharacter;
class UCurveFloat;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTimerPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LightCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsLocalOnly;
    
private:
    UPROPERTY()
    float DefaultIntensity;
    
    UPROPERTY(Transient)
    FFlagContainer DisableFlag;
    
    UPROPERTY(Transient)
    FFlagContainer IgnoreCurveFlag;
    
    UPROPERTY(Transient)
    FFlagContainer EnableWhenDayTimeFlag;
    
public:
    UPalTimerPointLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreCurveFlag(FName Key, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWhenDayTime(FName Key, bool Enable);
    
private:
    UFUNCTION()
    void CheckOtomoPal_AndSetRange(APalCharacter* SelfCharacter);
    
};

