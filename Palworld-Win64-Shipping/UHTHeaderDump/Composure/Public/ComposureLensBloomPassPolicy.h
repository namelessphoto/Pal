#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LensBloomSettings -FallbackName=LensBloomSettings
#include "ComposurePostProcessPassPolicy.h"
#include "ComposureLensBloomPassPolicy.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(EditInlineNew)
class COMPOSURE_API UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLensBloomSettings Settings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UMaterialInterface* ReplacementMaterial;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName BloomIntensityParamName;
    
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* TonemapperReplacmentMID;
    
public:
    UComposureLensBloomPassPolicy();

};

