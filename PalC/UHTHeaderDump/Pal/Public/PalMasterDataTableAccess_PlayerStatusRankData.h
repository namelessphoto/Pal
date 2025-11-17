#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_PlayerStatusRankData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_PlayerStatusRankData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_PlayerStatusRankData();

    UFUNCTION(BlueprintPure)
    int32 GetMaxRank();
    
};

