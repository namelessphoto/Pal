#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PalRESTAPISubsystem.generated.h"

UCLASS()
class PAL_API UPalRESTAPISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPalRESTAPISubsystem();

};

