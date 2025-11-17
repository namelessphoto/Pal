#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EPalFacialEyeType.h"
#include "PalAnimNotifyState_FacialEye.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_FacialEye : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalFacialEyeType EyeType;
    
    UPROPERTY(EditAnywhere)
    bool AutoDefaultWhenEnd;
    
    UPalAnimNotifyState_FacialEye();

};

