#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_PerceivedActors.generated.h"

class AActor;
class UAISense;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> AllowedActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> ListenerContext;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAISense> SenseToUse;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeKnownActors;
    
public:
    UEnvQueryGenerator_PerceivedActors();

};

