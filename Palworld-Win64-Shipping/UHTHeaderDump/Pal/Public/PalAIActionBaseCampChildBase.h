#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionBaseCampChildBase.generated.h"

class UPalAIActionBaseCampBase;

UCLASS(Abstract, EditInlineNew)
class PAL_API UPalAIActionBaseCampChildBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UPalAIActionBaseCampBase> BaseCampParentAction;
    
public:
    UPalAIActionBaseCampChildBase();

};

