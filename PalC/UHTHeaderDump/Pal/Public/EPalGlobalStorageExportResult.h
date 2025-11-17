#pragma once
#include "CoreMinimal.h"
#include "EPalGlobalStorageExportResult.generated.h"

UENUM()
    Success,
    Failed_InvalidExportDataIndex,
    Failed_InvalidIndividualSlot,
    Failed_InvalidIndividualHandle,
    Failed_NotFoundParameter,
    Failed_InvalidExportData,
    Failed_FullGlobalPalStorage,
    Failed_NotLoadedStorageData,
    Failed_ExistSameInstanceId,
    Failed_FailRemoveOldData,
    Failed_NowFoundOptionSubsystem,
    Failed_NowAllowExport,
    Failed_Unknown,
};

