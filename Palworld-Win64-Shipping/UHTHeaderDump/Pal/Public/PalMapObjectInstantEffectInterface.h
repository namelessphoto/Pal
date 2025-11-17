#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalMapObjectInstantEffectInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMapObjectInstantEffectInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectInstantEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAllowInstantEffect(int32 RequestPlayerId, AActor* RequestActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ExecuteInstantEffect(int32 RequestPlayerId, AActor* RequestActor);
    
};

