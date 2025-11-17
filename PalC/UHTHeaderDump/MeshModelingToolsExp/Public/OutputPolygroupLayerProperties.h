#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "OutputPolygroupLayerProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GroupLayer;
    
    UPROPERTY()
    TArray<FString> OptionsList;
    
    UPROPERTY()
    bool bShowNewLayerName;
    
    UPROPERTY(EditAnywhere)
    FString NewLayerName;
    
    UOutputPolygroupLayerProperties();

    UFUNCTION()
    TArray<FString> GetGroupOptionsList();
    
};

