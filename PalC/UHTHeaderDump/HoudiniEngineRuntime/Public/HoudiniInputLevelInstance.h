#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputLevelInstance.generated.h"

class AActor;
class UHoudiniInputObject;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputLevelInstance : public UHoudiniInputActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<TSoftObjectPtr<AActor>, UHoudiniInputObject*> TrackedActorObjects;
    
    UPROPERTY()
    int32 NumActorsAddedLastUpdate;
    
    UPROPERTY()
    int32 NumActorsRemovedLastUpdate;
    
public:
    UHoudiniInputLevelInstance();

};

