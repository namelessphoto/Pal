#pragma once
#include "CoreMinimal.h"
#include "CompositingElementOutput.h"
#include "RenderTargetCompositingOutput.generated.h"

class UTextureRenderTarget2D;

UCLASS(EditInlineNew)
class COMPOSURE_API URenderTargetCompositingOutput : public UCompositingElementOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RenderTarget;
    
    URenderTargetCompositingOutput();

};

