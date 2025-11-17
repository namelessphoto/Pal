#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampLevelMasterData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_BaseCampLevelData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_BaseCampLevelData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_BaseCampLevelData();

    UFUNCTION(BlueprintPure)
    int32 GetMaxWorkerMaxNum();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLevel();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxBaseCampMaxNumInGuild();
    
    UFUNCTION(BlueprintPure)
    FPalBaseCampLevelMasterData GetLevelInfo(int32 Level);
    
};

