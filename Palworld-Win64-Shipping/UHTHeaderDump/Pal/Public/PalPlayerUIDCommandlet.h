#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "PalPlayerUIDCommandlet.generated.h"

UCLASS(NonTransient)
class PAL_API UPalPlayerUIDCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPalPlayerUIDCommandlet();

};

