#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.h"
#include "PalBuildObjectIconData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_BuildObjectIconData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_BuildObjectIconData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_BuildObjectIconData();

private:
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalBuildObjectIconData& OutData);
    
    UFUNCTION(BlueprintPure)
    FPalBuildObjectIconData BP_FindRow(FName RowName, bool& bResult) const;
    
};

