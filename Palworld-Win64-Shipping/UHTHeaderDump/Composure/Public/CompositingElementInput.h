#pragma once
#include "CoreMinimal.h"
#include "CompositingElementPass.h"
#include "CompositingElementInput.generated.h"

class UTexture;

UCLASS(Abstract, EditInlineNew)
class COMPOSURE_API UCompositingElementInput : public UCompositingElementPass {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bIntermediate;
    
    UCompositingElementInput();

protected:
    UFUNCTION(BlueprintNativeEvent)
    UTexture* GenerateInput();
    
};

