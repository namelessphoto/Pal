#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "PalAnimNotifyState_FlyMeshHeight.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_FlyMeshHeight : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IsToLand;
    
    UPalAnimNotifyState_FlyMeshHeight();

};

