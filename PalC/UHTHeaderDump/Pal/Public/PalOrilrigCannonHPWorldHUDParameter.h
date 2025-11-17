#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalOrilrigCannonHPWorldHUDParameter.generated.h"

class UPalCannonDamageReactionComponent;

UCLASS(BlueprintType)
class UPalOrilrigCannonHPWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UPalCannonDamageReactionComponent* CannonDamageReaction;
    
    UPalOrilrigCannonHPWorldHUDParameter();

};

