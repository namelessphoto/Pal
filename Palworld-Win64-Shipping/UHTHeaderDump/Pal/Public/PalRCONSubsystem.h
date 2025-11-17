#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PalRCONSubsystem.generated.h"

UCLASS()
class PAL_API UPalRCONSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPalRCONSubsystem();

};

