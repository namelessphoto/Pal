#pragma once
#include "CoreMinimal.h"
#include "CompositingMediaInput.h"
#include "MediaTextureCompositingInput.generated.h"

class UMediaTexture;

UCLASS(EditInlineNew)
class COMPOSURE_API UMediaTextureCompositingInput : public UCompositingMediaInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMediaTexture* MediaSource;
    
    UMediaTextureCompositingInput();

};

