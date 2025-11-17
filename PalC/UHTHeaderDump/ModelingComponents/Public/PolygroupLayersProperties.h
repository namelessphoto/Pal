#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PolygroupLayersProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UPolygroupLayersProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ActiveGroupLayer;
    
    UPROPERTY()
    TArray<FString> GroupLayersList;
    
    UPolygroupLayersProperties();

    UFUNCTION()
    TArray<FString> GetGroupLayersFunc();
    
};

