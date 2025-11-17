#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERetargetRotationMode.h"
#include "ERetargetTranslationMode.h"
#include "TargetChainSettings.h"
#include "RetargetChainSettings.generated.h"

UCLASS()
class IKRIG_API URetargetChainSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName SourceChain;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetChain;
    
    UPROPERTY(EditAnywhere)
    FTargetChainSettings Settings;
    
    UPROPERTY()
    bool CopyPoseUsingFK;
    
    UPROPERTY()
    ERetargetRotationMode RotationMode;
    
    UPROPERTY()
    float RotationAlpha;
    
    UPROPERTY()
    ERetargetTranslationMode TranslationMode;
    
    UPROPERTY()
    float TranslationAlpha;
    
    UPROPERTY()
    bool DriveIKGoal;
    
    UPROPERTY()
    float BlendToSource;
    
    UPROPERTY()
    FVector BlendToSourceWeights;
    
    UPROPERTY()
    FVector StaticOffset;
    
    UPROPERTY()
    FVector StaticLocalOffset;
    
    UPROPERTY()
    FRotator StaticRotationOffset;
    
    UPROPERTY()
    float Extension;
    
    UPROPERTY()
    bool UseSpeedCurveToPlantIK;
    
    UPROPERTY()
    FName SpeedCurveName;
    
    UPROPERTY()
    float VelocityThreshold;
    
    UPROPERTY()
    float UnplantStiffness;
    
    UPROPERTY()
    float UnplantCriticalDamping;
    
    URetargetChainSettings();

};

