#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "PalAnimNotifyState_UVEyeCurve.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_UVEyeCurve : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UVAnimeX_CurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float XScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UVAnimeY_CurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YScale;
    
public:
    UPalAnimNotifyState_UVEyeCurve();

};

