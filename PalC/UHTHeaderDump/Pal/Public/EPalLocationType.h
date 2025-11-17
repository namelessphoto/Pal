#pragma once
#include "CoreMinimal.h"
#include "EPalLocationType.generated.h"

UENUM()
    Undefined,
    Point,
    PointStatic,
    PointFastTravel,
    PointBaseCamp,
    PointPlayer,
    PointMapObject,
    PointCharacter,
    PointDungeonPortal,
    PointStaticRespawn,
    PointBossTower,
    DroppedCharacter,
    DroppedChest,
    Area,
    CustomMarker,
    FieldBoss,
    HumanBoss,
    Oilrig,
    SupplyMarker,
    PointDungeonGoal,
    QuestStatic,
    QuestTrackingActor,
    TreasureMapPoint,
};

