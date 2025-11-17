#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "DistortionHandlerPicker.generated.h"

class UCineCameraComponent;

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FDistortionHandlerPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, Transient)
    UCineCameraComponent* TargetCameraComponent;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid DistortionProducerID;
    
    UPROPERTY(BlueprintReadWrite)
    FString HandlerDisplayName;
    
    FDistortionHandlerPicker();
};

