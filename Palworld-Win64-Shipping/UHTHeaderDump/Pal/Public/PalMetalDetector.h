#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWeaponBase.h"
#include "PalMetalDetector.generated.h"

class APalMapObject;
class USphereComponent;

UCLASS()
class PAL_API APalMetalDetector : public APalWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BasePulseInterval;
    
    UPROPERTY(EditAnywhere)
    float BasePulseIntervalMin;
    
    UPROPERTY(EditAnywhere)
    float BasePulseFadeoutTime;
    
    UPROPERTY(EditAnywhere)
    float DetectorRange;
    
    UPROPERTY(EditAnywhere)
    FLinearColor PulseFarColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor PulseNearestColor;
    
    UPROPERTY(Transient)
    APalMapObject* NearestDetectorObject;
    
public:
    APalMetalDetector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnChangedHiddenWeapon(bool bInHidden);
    
    UFUNCTION(BlueprintImplementableEvent)
    USphereComponent* GetDetectorSphere() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetDetectorLocation() const;
    
};

