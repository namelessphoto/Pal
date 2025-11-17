#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EInputActionState.h"
#include "CommonInputTypeInfo.generated.h"

USTRUCT()
struct COMMONUI_API FCommonInputTypeInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
public:
    UPROPERTY(EditAnywhere)
    EInputActionState OverrrideState;
    
    UPROPERTY(EditAnywhere)
    bool bActionRequiresHold;
    
    UPROPERTY(EditAnywhere)
    float HoldTime;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush OverrideBrush;
    
    FCommonInputTypeInfo();
};

