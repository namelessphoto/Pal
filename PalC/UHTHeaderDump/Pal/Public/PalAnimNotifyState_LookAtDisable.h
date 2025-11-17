#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "PalAnimNotifyState_LookAtDisable.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_LookAtDisable : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableLookAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableUVLookAt;
    
public:
    UPalAnimNotifyState_LookAtDisable();

};

