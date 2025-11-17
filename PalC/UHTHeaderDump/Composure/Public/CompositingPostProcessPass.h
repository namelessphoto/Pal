#pragma once
#include "CoreMinimal.h"
#include "CompositingElementTransform.h"
#include "CompositingPostProcessPass.generated.h"

class UComposurePostProcessPassPolicy;

UCLASS(EditInlineNew)
class COMPOSURE_API UCompositingPostProcessPass : public UCompositingElementTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RenderScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UComposurePostProcessPassPolicy*> PostProcessPasses;
    
    UCompositingPostProcessPass();

};

