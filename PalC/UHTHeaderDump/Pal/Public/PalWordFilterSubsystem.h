#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PalWordFilterSubsystem.generated.h"

UCLASS()
class PAL_API UPalWordFilterSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPalWordFilterSubsystem();

};

