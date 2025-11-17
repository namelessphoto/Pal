#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIMoveRequest -FallbackName=AIMoveRequest
#include "PalAIMoveRequest.generated.h"

USTRUCT()
struct FPalAIMoveRequest : public FAIMoveRequest {
    GENERATED_BODY()
public:
    PAL_API FPalAIMoveRequest();
};

