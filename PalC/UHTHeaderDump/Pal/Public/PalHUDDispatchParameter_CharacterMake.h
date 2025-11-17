#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterMake.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_CharacterMake : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsNewGame;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsRemake;
    
    UPalHUDDispatchParameter_CharacterMake();

};

