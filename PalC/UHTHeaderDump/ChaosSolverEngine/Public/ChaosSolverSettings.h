#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ChaosSolverSettings.generated.h"

UCLASS(DefaultConfig)
class CHAOSSOLVERENGINE_API UChaosSolverSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath DefaultChaosSolverActorClass;
    
    UChaosSolverSettings();

};

