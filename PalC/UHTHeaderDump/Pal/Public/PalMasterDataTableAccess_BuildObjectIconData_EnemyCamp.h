#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccess_BuildObjectIconData.h"
#include "PalMasterDataTableAccess_BuildObjectIconData_EnemyCamp.generated.h"

UCLASS()
class UPalMasterDataTableAccess_BuildObjectIconData_EnemyCamp : public UPalMasterDataTableAccess_BuildObjectIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, FString> RowNameReplaceMap;
    
    UPalMasterDataTableAccess_BuildObjectIconData_EnemyCamp();

};

