#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameFeaturePluginStateMachineProperties.h"
#include "GameFeaturePluginStateMachine.generated.h"

UCLASS()
class UGameFeaturePluginStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGameFeaturePluginStateMachineProperties StateProperties;
    
public:
    UGameFeaturePluginStateMachine();

};

