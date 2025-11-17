#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDisposeOptionType.generated.h"

UENUM()
    NoDropItems,
    NotAutoPickup,
    OpenTreasureBox,
    ImmediatelyInGameThread,
    NotNotifyOwnerSpawnerLevelObject,
    ByUnloadStage,
    DropBuildMaterials,
    RequireRespawnImmediately,
    Replace,
    BuildCancel,
};

