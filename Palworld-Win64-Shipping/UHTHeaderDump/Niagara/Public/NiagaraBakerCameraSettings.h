#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENiagaraBakerViewMode.h"
#include "NiagaraBakerCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraBakerCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    ENiagaraBakerViewMode ViewMode;
    
    UPROPERTY()
    FVector ViewportLocation;
    
    UPROPERTY()
    FRotator ViewportRotation;
    
    UPROPERTY()
    float OrbitDistance;
    
    UPROPERTY()
    float FOV;
    
    UPROPERTY()
    float OrthoWidth;
    
    UPROPERTY()
    bool bUseAspectRatio;
    
    UPROPERTY()
    float AspectRatio;
    
    NIAGARA_API FNiagaraBakerCameraSettings();
};

