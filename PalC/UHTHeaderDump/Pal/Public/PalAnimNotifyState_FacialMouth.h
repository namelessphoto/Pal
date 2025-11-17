#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EPalFacialMouthType.h"
#include "PalAnimNotifyState_FacialMouth.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_FacialMouth : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalFacialMouthType MouthType;
    
    UPROPERTY(EditAnywhere)
    bool AutoDefaultWhenEnd;
    
    UPalAnimNotifyState_FacialMouth();

};

