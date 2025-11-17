#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputBlueprint.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputBlueprint : public UHoudiniInputObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UHoudiniInputSceneComponent*> BPComponents;
    
    UPROPERTY()
    TSet<TSoftObjectPtr<UObject>> BPSceneComponents;
    
    UPROPERTY()
    int32 LastUpdateNumComponentsAdded;
    
    UPROPERTY()
    int32 LastUpdateNumComponentsRemoved;
    
public:
    UHoudiniInputBlueprint();

};

