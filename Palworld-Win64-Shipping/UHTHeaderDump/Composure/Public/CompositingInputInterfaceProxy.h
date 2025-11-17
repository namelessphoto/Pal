#pragma once
#include "CoreMinimal.h"
#include "CompositingElementInput.h"
#include "CompositingInputInterfaceProxy.generated.h"

class ICompositingInputInterface;
class UCompositingInputInterface;

UCLASS(HideDropdown, NotEditInlineNew)
class COMPOSURE_API UCompositingInputInterfaceProxy : public UCompositingElementInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TScriptInterface<ICompositingInputInterface> CompositingInput;
    
    UCompositingInputInterfaceProxy();

};

