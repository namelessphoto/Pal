#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalSignificanceUpdaterBase.generated.h"

UCLASS(Abstract)
class UPalSignificanceUpdaterBase : public UObject {
    GENERATED_BODY()
public:
    UPalSignificanceUpdaterBase();

};

