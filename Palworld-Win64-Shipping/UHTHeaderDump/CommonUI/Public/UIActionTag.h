#pragma once
#include "CoreMinimal.h"
#include "UITag.h"
#include "UIActionTag.generated.h"

USTRUCT()
struct FUIActionTag : public FUITag {
    GENERATED_BODY()
public:
    COMMONUI_API FUIActionTag();
};

