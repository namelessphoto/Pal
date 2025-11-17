#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "ActiveCameraAnimationInfo.h"
#include "CameraAnimationHandle.h"
#include "CameraAnimationParams.h"
#include "CameraAnimationCameraModifier.generated.h"

class APlayerController;
class UCameraAnimationCameraModifier;
class UCameraAnimationSequence;
class UObject;

UCLASS(Config=Camera)
class GAMEPLAYCAMERAS_API UCameraAnimationCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FActiveCameraAnimationInfo> ActiveAnimations;
    
    UPROPERTY()
    uint16 NextInstanceSerialNumber;
    
public:
    UCameraAnimationCameraModifier();

    UFUNCTION(BlueprintCallable)
    void StopCameraAnimation(const FCameraAnimationHandle& Handle, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnimationsOf(UCameraAnimationSequence* Sequence, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnimations(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    FCameraAnimationHandle PlayCameraAnimation(UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    
    UFUNCTION(BlueprintPure)
    bool IsCameraAnimationActive(const FCameraAnimationHandle& Handle) const;
    
    UFUNCTION(BlueprintPure)
    static UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const UObject* WorldContextObject, int32 ControllerId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const UObject* WorldContextObject, int32 PlayerIndex);
    
};

