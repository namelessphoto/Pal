#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalFixedWeaponDestroySaveData.generated.h"

USTRUCT()
struct FPalFixedWeaponDestroySaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> DestroyedWeapon;
    
    PAL_API FPalFixedWeaponDestroySaveData();
};

