#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "PalAnimNotify_RequestRideShakeAnimation.generated.h"

class APalCharacter;
class UAnimMontage;

UCLASS(CollapseCategories)
class PAL_API UPalAnimNotify_RequestRideShakeAnimation : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ApplyRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlaySpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsAdjustAnimationSpeed;
    
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<APalCharacter> cacheCharacter;
    
    UPROPERTY(Transient)
    TArray<float> RateList;
    
public:
    UPalAnimNotify_RequestRideShakeAnimation();

private:
    UFUNCTION()
    void OnStartAim() const;
    
    UFUNCTION()
    void OnEndMotion(UAnimMontage* Montage, bool bInterrupted) const;
    
};

