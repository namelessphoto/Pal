#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "UIActionKeyMapping.generated.h"

USTRUCT()
struct FUIActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FKey Key;
    
    UPROPERTY(Config, EditAnywhere)
    float HoldTime;
    
    COMMONUI_API FUIActionKeyMapping();
};

