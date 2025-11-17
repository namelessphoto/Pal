#pragma once
#include "CoreMinimal.h"
#include "PalSpawnerGroupInfo.h"
#include "PalSpawnerGroupInfoList.generated.h"

USTRUCT(BlueprintType)
struct FPalSpawnerGroupInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FPalSpawnerGroupInfo> GroupList;
    
    PAL_API FPalSpawnerGroupInfoList();
};

