#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OpenColorIO -ObjectName=OpenColorIOColorConversionSettings -FallbackName=OpenColorIOColorConversionSettings
#include "CompositingElementTransform.h"
#include "CompositingOpenColorIOPass.generated.h"

UCLASS(EditInlineNew)
class COMPOSURE_API UCompositingOpenColorIOPass : public UCompositingElementTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FOpenColorIOColorConversionSettings ColorConversionSettings;
    
    UCompositingOpenColorIOPass();

};

