#pragma once
#include "CoreMinimal.h"
#include "CompositingElementPass.h"
#include "CompositingElementOutput.generated.h"

class UComposurePostProcessingPassProxy;
class UTexture;

UCLASS(Abstract, EditInlineNew)
class COMPOSURE_API UCompositingElementOutput : public UCompositingElementPass {
    GENERATED_BODY()
public:
    UCompositingElementOutput();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void RelayOutput(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy);
    
};

