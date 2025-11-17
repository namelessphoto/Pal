#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySourceToAdd.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_DataRegistrySource.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FDataRegistrySourceToAdd> SourcesToAdd;
    
    UPROPERTY(EditAnywhere)
    bool bPreloadInEditor;
    
public:
    UGameFeatureAction_DataRegistrySource();

};

