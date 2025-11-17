#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "EPalWeaponType.h"
#include "PalCameraDOFSetting.h"
#include "PalCharacterCameraComponent.generated.h"

class APalWeaponBase;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkFOV;
    
    UPROPERTY(EditAnywhere)
    float SprintFOV;
    
    UPROPERTY(EditAnywhere)
    float SprintFOVInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float PostProcessInterpTime;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFocalDistance_NoAim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurAmount_NoAim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurRadius_NoAim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFstop_NoAim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFocalDistance_Aim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurAmount_Aim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurRadius_Aim;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFstop_Aim;
    
    UPROPERTY(EditAnywhere)
    TMap<EPalWeaponType, FPalCameraDOFSetting> DefaultWeaponDOFSetting;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<APalWeaponBase>, FPalCameraDOFSetting> UniqueWeaponDOFSetting;
    
    UPROPERTY(EditAnywhere)
    bool bIsDynamicDOFFocalDistance;
    
    UPROPERTY(EditAnywhere)
    float DynamicDOFFocalDistanceSpeed;
    
    UPROPERTY(EditAnywhere)
    float DynamicDOFFocalDistanceMAX;
    
    UPROPERTY(EditAnywhere)
    bool bIsEnableSpeedBlur;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DynamicSpeedBlurMaterial;
    
    UPROPERTY(EditAnywhere)
    float SpeedBlurInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinSpeedBlurSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedBlurSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedBlurAlpha;
    
    UPROPERTY(EditAnywhere)
    bool bIsEnableAimBlur;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DynamicAimBlurMaterial;
    
    UPROPERTY(EditAnywhere)
    float BlendInAimBlurInterpTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutAimBlurInterpTime;
    
    UPROPERTY(EditAnywhere)
    float AimFOVInterpTime;
    
    UPROPERTY(EditAnywhere)
    float AimFOV;
    
    UPROPERTY(EditDefaultsOnly)
    float RotateSpeedRate;
    
private:
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicSpeedBlurMaterialDynamic;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicAimBlurMaterialDynamic;
    
public:
    UPalCharacterCameraComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnStartAim();
    
    UFUNCTION()
    void OnEndAim();
    
};

