#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalAIOtomoParameterInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAIOtomoParameterInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAIOtomoParameterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsReturningFromFar(bool IsReturningFromFar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsReturningFromFar() const;
    
};

