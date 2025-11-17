#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalObjectReplicatorComponent.generated.h"

class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalObjectReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UObject*> ReplicateObject;
    
public:
    UPalObjectReplicatorComponent(const FObjectInitializer& ObjectInitializer);

};

