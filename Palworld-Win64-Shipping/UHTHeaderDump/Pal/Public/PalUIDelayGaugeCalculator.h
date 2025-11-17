#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUIDelayGaugeCalculator.generated.h"

class UProgressBar;

UCLASS(BlueprintType)
class PAL_API UPalUIDelayGaugeCalculator : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartDelayGaugeTimerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelayGaugeDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FStartDelayGaugeTimerDelegate OnStartDelayGaugeTimerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEndDelayGaugeDelegate OnEndDelayGaugeDelegate;
    
private:
    UPROPERTY(Instanced)
    UProgressBar* mainBar;
    
    UPROPERTY(Instanced)
    UProgressBar* subBar;
    
    UPROPERTY()
    float delayGaugeTimer;
    
    UPROPERTY()
    float delayGaugeStartTime;
    
    UPROPERTY()
    float delayGaugeProgressPerSecond;
    
public:
    UPalUIDelayGaugeCalculator();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UProgressBar* inMainBar, UProgressBar* inSubBar);
    
    UFUNCTION(BlueprintCallable)
    void SetPercentForce(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(float Percent);
    
};

