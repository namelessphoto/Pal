#pragma once
#include "CoreMinimal.h"
#include "UIActionKeyMapping.h"
#include "UIActionTag.h"
#include "UIInputAction.generated.h"

USTRUCT(BlueprintType)
struct FUIInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FUIActionTag ActionTag;
    
    UPROPERTY(Config, EditAnywhere)
    FText DefaultDisplayName;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FUIActionKeyMapping> KeyMappings;
    
    COMMONUI_API FUIInputAction();
};

