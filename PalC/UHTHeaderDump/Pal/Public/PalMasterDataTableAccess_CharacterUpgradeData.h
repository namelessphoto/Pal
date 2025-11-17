#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_CharacterUpgradeData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_CharacterUpgradeData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_CharacterUpgradeData();

    UFUNCTION(BlueprintPure)
    int32 GetMaxRank();
    
};

