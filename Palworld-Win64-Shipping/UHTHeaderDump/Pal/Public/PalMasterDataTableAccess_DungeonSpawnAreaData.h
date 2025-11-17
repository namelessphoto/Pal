#pragma once
#include "CoreMinimal.h"
#include "PalDungeonSpawnAreaData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_DungeonSpawnAreaData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_DungeonSpawnAreaData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_DungeonSpawnAreaData();

    UFUNCTION(BlueprintPure)
    FPalDungeonSpawnAreaData BP_FindRow(FName RowName, bool& bResult) const;
    
};

