#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_Invader.generated.h"

class APalCharacter;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_Invader : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<APalCharacter> ParentCharacter;
    
    UPalHUDDispatchParameter_Invader();

};

