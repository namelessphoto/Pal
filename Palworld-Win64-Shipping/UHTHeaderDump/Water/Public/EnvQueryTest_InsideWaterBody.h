#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_InsideWaterBody.generated.h"

UCLASS()
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIncludeWaves;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSimpleWaves;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreExclusionVolumes;
    
    UEnvQueryTest_InsideWaterBody();

};

