#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
#include "FOscillator.h"
#include "ROscillator.h"
#include "Templates/SubclassOf.h"
#include "VOscillator.h"
#include "LegacyCameraShake.generated.h"

class APlayerCameraManager;
class UCameraAnimationSequence;
class UCameraShakeSourceComponent;
class ULegacyCameraShake;
class USequenceCameraShakePattern;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API ULegacyCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OscillationDuration;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator FOVOscillation;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    float AnimScale;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomAnimSegmentDuration;
    
    UPROPERTY(EditAnywhere)
    UCameraAnimationSequence* AnimSequence;
    
    UPROPERTY(EditAnywhere)
    uint8 bRandomAnimSegment: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float OscillatorTimeRemaining;
    
protected:
    UPROPERTY(Instanced)
    USequenceCameraShakePattern* SequenceShakePattern;
    
public:
    ULegacyCameraShake();

    UFUNCTION(BlueprintCallable)
    static ULegacyCameraShake* StartLegacyCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, TSubclassOf<ULegacyCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    static ULegacyCameraShake* StartLegacyCameraShake(APlayerCameraManager* PlayerCameraManager, TSubclassOf<ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStopShake(bool bImmediately);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayShake(float Scale);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ReceiveIsFinished() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
    
};

