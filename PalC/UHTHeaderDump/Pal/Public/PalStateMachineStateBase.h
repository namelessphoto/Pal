#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStateMachineStateBase.generated.h"

UCLASS(Abstract)
class PAL_API UPalStateMachineStateBase : public UObject {
    GENERATED_BODY()
public:
    UPalStateMachineStateBase();

};

