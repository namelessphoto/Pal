#pragma once
#include "CoreMinimal.h"
#include "EChaosCollisionSortMethod.generated.h"

UENUM()
    SortNone,
    SortByHighestMass,
    SortByHighestSpeed,
    SortByHighestImpulse,
    SortByNearestFirst,
    Count,
};

