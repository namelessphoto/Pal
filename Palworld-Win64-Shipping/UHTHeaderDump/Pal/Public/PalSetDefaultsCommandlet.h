#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "PalSetDefaultsCommandlet.generated.h"

UCLASS(NonTransient)
class PAL_API UPalSetDefaultsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPalSetDefaultsCommandlet();

};

