#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComposurePostProcessPassPolicy.generated.h"

class UMaterialInterface;
class USceneCaptureComponent2D;

UCLASS(Abstract, Blueprintable)
class COMPOSURE_API UComposurePostProcessPassPolicy : public UObject {
    GENERATED_BODY()
public:
    UComposurePostProcessPassPolicy();

    UFUNCTION(BlueprintNativeEvent)
    void SetupPostProcess(USceneCaptureComponent2D* SceneCapture, UMaterialInterface*& TonemapperOverride);
    
};

