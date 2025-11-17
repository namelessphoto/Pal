#pragma once
#include "CoreMinimal.h"
#include "CompEditorImagePreviewInterface.h"
#include "CompositingElementOutput.h"
#include "Templates/SubclassOf.h"
#include "ColorConverterOutputPass.generated.h"

class UCompositingElementTransform;

UCLASS(Abstract, EditInlineNew)
class COMPOSURE_API UColorConverterOutputPass : public UCompositingElementOutput, public ICompEditorImagePreviewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UCompositingElementTransform* ColorConverter;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<UCompositingElementTransform> DefaultConverterClass;
    
public:
    UColorConverterOutputPass();


    // Fix for true pure virtual functions not being implemented
};

