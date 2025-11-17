#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PatternTool_OutputSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool_OutputSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSeparateActors;
    
    UPROPERTY(EditAnywhere)
    bool bConvertToDynamic;
    
    UPROPERTY(EditAnywhere)
    bool bCreateISMCs;
    
    UPROPERTY()
    bool bHaveStaticMeshes;
    
    UPatternTool_OutputSettings();

};

