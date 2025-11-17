#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_DataRegistry.generated.h"

class UDataRegistry;

UCLASS(EditInlineNew, MinimalAPI)
class UGameFeatureAction_DataRegistry : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDataRegistry>> RegistriesToAdd;
    
    UPROPERTY(EditAnywhere)
    bool bPreloadInEditor;
    
public:
    UGameFeatureAction_DataRegistry();

};

