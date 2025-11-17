#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CompositingTextureLookupTable.generated.h"

class UTexture;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UCompositingTextureLookupTable : public UInterface {
    GENERATED_BODY()
};

class ICompositingTextureLookupTable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool FindNamedPassResult(FName LookupName, UTexture*& OutTexture) const PURE_VIRTUAL(FindNamedPassResult, return false;);
    
};

