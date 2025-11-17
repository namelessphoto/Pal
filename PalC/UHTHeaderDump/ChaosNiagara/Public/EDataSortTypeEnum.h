#pragma once
#include "CoreMinimal.h"
#include "EDataSortTypeEnum.generated.h"

UENUM(Flags)
    ChaosNiagara_DataSortType_NoSorting,
    ChaosNiagara_DataSortType_RandomShuffle,
    ChaosNiagara_DataSortType_SortByMassMaxToMin,
    ChaosNiagara_DataSortType_SortByMassMinToMax,
};

