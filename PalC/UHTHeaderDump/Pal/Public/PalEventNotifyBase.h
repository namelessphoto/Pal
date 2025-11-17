#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalEventNotifyBase.generated.h"

UCLASS(Abstract)
class PAL_API UPalEventNotifyBase : public UObject {
    GENERATED_BODY()
public:
    UPalEventNotifyBase();

};

