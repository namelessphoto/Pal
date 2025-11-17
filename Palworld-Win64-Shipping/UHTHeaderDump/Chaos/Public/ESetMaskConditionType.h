#pragma once
#include "CoreMinimal.h"
#include "ESetMaskConditionType.generated.h"

UENUM()
    Field_Set_Always,
    Field_Set_IFF_NOT_Interior,
    Field_Set_IFF_NOT_Exterior,
    Field_MaskCondition_Max UMETA(Hidden),
};

