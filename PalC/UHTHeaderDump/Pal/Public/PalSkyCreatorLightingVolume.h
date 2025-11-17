#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalSkyCreatorLightingVolume.generated.h"

class APalLightingVolumeController;

UCLASS()
class PAL_API APalSkyCreatorLightingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RayleighScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayleighExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LightAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SkyLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsOverrideSkyLightIntensity;
    
private:
    UPROPERTY(Transient)
    APalLightingVolumeController* VolumeController;
    
public:
    APalSkyCreatorLightingVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OtherActor);
    
};

