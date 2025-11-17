#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ScriptStruct -FallbackName=ScriptStruct
#include "PropertyBagPropertyDesc.h"
#include "PropertyBag.generated.h"

UCLASS(Transient)
class STRUCTUTILS_API UPropertyBag : public UScriptStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FPropertyBagPropertyDesc> PropertyDescs;
    
public:
    UPropertyBag();

};

