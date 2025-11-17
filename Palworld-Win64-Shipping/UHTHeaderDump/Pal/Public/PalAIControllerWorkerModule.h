#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAIControllerWorkerModule.generated.h"

UCLASS(Abstract)
class PAL_API UPalAIControllerWorkerModule : public UObject {
    GENERATED_BODY()
public:
    UPalAIControllerWorkerModule();

};

