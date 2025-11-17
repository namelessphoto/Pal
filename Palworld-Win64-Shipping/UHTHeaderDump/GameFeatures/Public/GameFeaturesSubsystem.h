#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "GameFeaturePluginIdentifier.h"
#include "GameFeaturesSubsystem.generated.h"

class UGameFeaturePluginStateMachine;
class UGameFeaturesProjectPolicies;
class UObject;

UCLASS()
class GAMEFEATURES_API UGameFeaturesSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGameFeaturePluginIdentifier, UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;
    
    UPROPERTY(Transient)
    TArray<UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines;
    
    UPROPERTY()
    TArray<UObject*> Observers;
    
    UPROPERTY(Transient)
    UGameFeaturesProjectPolicies* GameSpecificPolicies;
    
public:
    UGameFeaturesSubsystem();

};

