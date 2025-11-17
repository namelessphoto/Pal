#pragma once
#include "CoreMinimal.h"
#include "ColorConverterOutputPass.h"
#include "CompositingMediaCaptureOutput.generated.h"

class UMediaCapture;
class UMediaOutput;

UCLASS(EditInlineNew)
class COMPOSURE_API UCompositingMediaCaptureOutput : public UColorConverterOutputPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMediaOutput* CaptureOutput;
    
private:
    UPROPERTY(DuplicateTransient, SkipSerialization, Transient)
    UMediaCapture* ActiveCapture;
    
public:
    UCompositingMediaCaptureOutput();

};

