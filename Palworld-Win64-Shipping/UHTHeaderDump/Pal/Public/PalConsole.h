#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Console -FallbackName=Console
#include "PalConsole.generated.h"

UCLASS(NonTransient)
class PAL_API UPalConsole : public UConsole {
    GENERATED_BODY()
public:
    UPalConsole();

};

