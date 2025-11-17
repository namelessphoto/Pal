#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "SequenceCameraShakeTestUtil.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequenceCameraShakeTestUtil();

    UFUNCTION(BlueprintPure)
    static bool GetPostProcessBlendCache(APlayerController* PlayerController, int32 PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight);
    
    UFUNCTION(BlueprintPure)
    static FMinimalViewInfo GetLastFrameCameraCachePOV(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    static FMinimalViewInfo GetCameraCachePOV(APlayerController* PlayerController);
    
};

