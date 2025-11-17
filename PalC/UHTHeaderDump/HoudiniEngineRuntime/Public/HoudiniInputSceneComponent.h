#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniInputObject.h"
#include "HoudiniInputSceneComponent.generated.h"

class UHoudiniInputActor;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSceneComponent : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform ActorTransform;
    
private:
    UPROPERTY()
    UHoudiniInputActor* ParentInputActor;
    
public:
    UHoudiniInputSceneComponent();

};

