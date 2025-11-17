#pragma once
#include "CoreMinimal.h"
#include "EPlatformIconDisplayRule.generated.h"

UENUM()
    Always,
    AlwaysIfDifferent,
    AlwaysWhenInCrossplayParty,
    AlwaysIfDifferentWhenInCrossplayParty,
    Never,
};

