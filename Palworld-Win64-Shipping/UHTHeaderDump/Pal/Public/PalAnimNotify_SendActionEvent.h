#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EPalCurrentActionNotifyType.h"
#include "PalAnimNotify_SendActionEvent.generated.h"

UCLASS(CollapseCategories)
class PAL_API UPalAnimNotify_SendActionEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalCurrentActionNotifyType NotifyType;
    
    UPalAnimNotify_SendActionEvent();

};

