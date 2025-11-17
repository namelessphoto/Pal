#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ActorInitStateChangedParams.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FActorInitStateChangedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FeatureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Implementer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag FeatureState;
    
    MODULARGAMEPLAY_API FActorInitStateChangedParams();
};

