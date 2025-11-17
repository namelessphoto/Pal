#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalObjectDurabilityInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalObjectDurabilityInterface : public UInterface {
    GENERATED_BODY()
};

class IPalObjectDurabilityInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    virtual void SetDurabilityInternal(float NewDurability) PURE_VIRTUAL(SetDurabilityInternal,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual float GetMaxDurability() const PURE_VIRTUAL(GetMaxDurability, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetDurability() const PURE_VIRTUAL(GetDurability, return 0.0f;);
    
};

