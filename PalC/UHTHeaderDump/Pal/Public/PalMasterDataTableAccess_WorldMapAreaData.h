#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalWorldMapAreaDataRow.h"
#include "PalMasterDataTableAccess_WorldMapAreaData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_WorldMapAreaData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_WorldMapAreaData();

    UFUNCTION(BlueprintPure)
    FPalWorldMapAreaDataRow BP_FindRow(FName RowName, bool& bResult) const;
    
};

