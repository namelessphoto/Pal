#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderBoolValue.h"
#include "EEnvTestPathfinding.h"
#include "EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Pathfinding.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class AIMODULE_API UEnvQueryTest_Pathfinding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestPathfinding> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderBoolValue SkipUnreachable;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UEnvQueryTest_Pathfinding();

};

