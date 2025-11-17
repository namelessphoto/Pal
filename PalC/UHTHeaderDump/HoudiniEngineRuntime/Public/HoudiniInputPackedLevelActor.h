#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputPackedLevelActor.generated.h"

class UHoudiniInputBlueprint;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputPackedLevelActor : public UHoudiniInputActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UHoudiniInputBlueprint* BlueprintInputObject;
    
public:
    UHoudiniInputPackedLevelActor();

};

