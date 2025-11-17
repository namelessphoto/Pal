#pragma once
#include "CoreMinimal.h"
#include "CompositingElementPass.h"
#include "CompositingElementTransform.generated.h"

class ACameraActor;
class UComposurePostProcessingPassProxy;
class UTexture;

UCLASS(Abstract, EditInlineNew)
class COMPOSURE_API UCompositingElementTransform : public UCompositingElementPass {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bIntermediate;
    
    UCompositingElementTransform();

protected:
    UFUNCTION(BlueprintCallable)
    UTexture* FindNamedPrePassResult(FName PassLookupName);
    
    UFUNCTION(BlueprintNativeEvent)
    UTexture* ApplyTransform(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera);
    
};

