#pragma once
#include "CoreMinimal.h"
#include "ActorForWorldTransforms.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FActorForWorldTransforms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    FActorForWorldTransforms();
};

