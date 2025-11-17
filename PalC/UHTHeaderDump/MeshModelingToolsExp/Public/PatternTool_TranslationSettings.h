#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PatternTool_TranslationSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool_TranslationSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bInterpolate;
    
    UPROPERTY()
    bool bJitter;
    
    UPROPERTY(EditAnywhere)
    FVector StartTranslation;
    
    UPROPERTY(EditAnywhere)
    FVector EndTranslation;
    
    UPROPERTY()
    FVector TranslationJitterRange;
    
    UPatternTool_TranslationSettings();

};

