#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EPalFacialEyeType.h"
#include "PalAnimNotify_FacialEye.generated.h"

UCLASS(CollapseCategories)
class PAL_API UPalAnimNotify_FacialEye : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalFacialEyeType EyeType;
    
    UPalAnimNotify_FacialEye();

};

