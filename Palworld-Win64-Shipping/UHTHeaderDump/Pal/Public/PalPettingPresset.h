#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPettingParameter.h"
#include "PalPettingPresset.generated.h"

class AActor;

UCLASS(BlueprintType)
class PAL_API UPalPettingPresset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalPettingParameter SmallPreset;
    
    UPROPERTY(EditDefaultsOnly)
    FPalPettingParameter SmallMiddlePreset;
    
    UPROPERTY(EditDefaultsOnly)
    FPalPettingParameter MediumPreset;
    
    UPROPERTY(EditDefaultsOnly)
    FPalPettingParameter LargePreset;
    
    UPalPettingPresset();

    UFUNCTION(BlueprintPure)
    float GetDistance(AActor* Pal);
    
    UFUNCTION(BlueprintPure)
    float GetCameraHeight(AActor* Pal);
    
    UFUNCTION(BlueprintPure)
    float GetCameraCenterDistance(AActor* Pal);
    
    UFUNCTION(BlueprintPure)
    float GetCameraArmLength(AActor* Pal);
    
};

