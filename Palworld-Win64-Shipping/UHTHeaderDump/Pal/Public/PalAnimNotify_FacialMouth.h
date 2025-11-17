#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EPalFacialMouthType.h"
#include "PalAnimNotify_FacialMouth.generated.h"

UCLASS(CollapseCategories)
class PAL_API UPalAnimNotify_FacialMouth : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalFacialMouthType MouthType;
    
    UPalAnimNotify_FacialMouth();

};

