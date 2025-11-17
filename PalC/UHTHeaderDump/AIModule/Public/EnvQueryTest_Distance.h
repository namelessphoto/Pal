#pragma once
#include "CoreMinimal.h"
#include "EEnvTestDistance.h"
#include "EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Distance.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_Distance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestDistance> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_Distance();

};

