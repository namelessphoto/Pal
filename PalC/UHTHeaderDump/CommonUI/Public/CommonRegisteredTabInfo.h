#pragma once
#include "CoreMinimal.h"
#include "CommonRegisteredTabInfo.generated.h"

class UCommonButtonBase;
class UWidget;

USTRUCT(BlueprintType)
struct FCommonRegisteredTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TabIndex;
    
    UPROPERTY(Instanced)
    UCommonButtonBase* TabButton;
    
    UPROPERTY(Instanced)
    UWidget* ContentInstance;
    
    COMMONUI_API FCommonRegisteredTabInfo();
};

