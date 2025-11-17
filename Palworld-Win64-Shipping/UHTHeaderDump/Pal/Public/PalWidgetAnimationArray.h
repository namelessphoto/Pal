#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalWidgetAnimationArray.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(BlueprintType)
class PAL_API UPalWidgetAnimationArray : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UUserWidget* TargetWidget;
    
    UPROPERTY()
    TMap<FName, UWidgetAnimation*> AnimationMap;
    
    UPROPERTY()
    float multiplyTimeScale;
    
public:
    UPalWidgetAnimationArray();

    UFUNCTION(BlueprintCallable)
    void StopAnimation(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void PlayOneShotReverse(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayOneShotPingPong(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayOneshot(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopReverse(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopPingPong(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoop(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PauseAnimation(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UUserWidget* inTargetWidget);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimationNameArray(TArray<FName>& OutArray);
    
};

