#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_GuildLab.generated.h"

class UPalUIGuildLabModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_GuildLab : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalUIGuildLabModel* Model;
    
    UPalHUDDispatchParameter_GuildLab();

};

