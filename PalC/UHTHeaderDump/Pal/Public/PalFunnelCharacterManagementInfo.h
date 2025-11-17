#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalFunnelCharacterManagementInfo.generated.h"

class APalFunnelCharacter;

USTRUCT(BlueprintType)
struct FPalFunnelCharacterManagementInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalInstanceID OwnerCharacterId;
    
    UPROPERTY()
    APalFunnelCharacter* FunnelCharacter;
    
    PAL_API FPalFunnelCharacterManagementInfo();
};

