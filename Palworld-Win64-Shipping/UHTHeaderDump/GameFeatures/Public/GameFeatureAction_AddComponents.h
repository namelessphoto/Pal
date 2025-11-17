#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeatureComponentEntry.h"
#include "GameFeatureAction_AddComponents.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UGameFeatureAction_AddComponents : public UGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGameFeatureComponentEntry> ComponentList;
    
    UGameFeatureAction_AddComponents();

};

