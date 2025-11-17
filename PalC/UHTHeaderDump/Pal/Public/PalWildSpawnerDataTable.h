#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalSpawnerGroupInfo.h"
#include "PalWildSpawnerDatabaseRow.h"
#include "PalWildSpawnerDataTable.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalWildSpawnerDataTable : public UObject {
    GENERATED_BODY()
public:
    UPalWildSpawnerDataTable();

    UFUNCTION(BlueprintCallable)
    TArray<FPalSpawnerGroupInfo> CreateGroupList(TArray<FPalWildSpawnerDatabaseRow> DataList);
    
};

