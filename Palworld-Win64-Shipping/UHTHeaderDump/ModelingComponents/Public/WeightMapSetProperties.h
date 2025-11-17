#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "WeightMapSetProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UWeightMapSetProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WeightMap;
    
    UPROPERTY()
    TArray<FString> WeightMapsList;
    
    UPROPERTY(EditAnywhere)
    bool bInvertWeightMap;
    
    UWeightMapSetProperties();

    UFUNCTION()
    TArray<FString> GetWeightMapsFunc();
    
};

