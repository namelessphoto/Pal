#pragma once
#include "CoreMinimal.h"
#include "EPalSaveDataRestoreResultType.generated.h"

UENUM()
    Success_AllSave,
    Succcess_NotExistLocalSaveBackup,
    Failed_NotExistWorldSaveBackup,
    Failed_NotExistAllSave,
    Failed_Unknown,
};

