#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "HoudiniInputObject.h"
#include "HoudiniInputActor.generated.h"

class UHoudiniInputSceneComponent;
class UObject;
class UStaticMesh;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputActor : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SplinesMeshObjectNodeId;
    
    UPROPERTY()
    int32 SplinesMeshNodeId;
    
protected:
    UPROPERTY()
    TArray<UHoudiniInputSceneComponent*> ActorComponents;
    
    UPROPERTY()
    TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;
    
    UPROPERTY()
    int32 LastUpdateNumComponentsAdded;
    
    UPROPERTY()
    int32 LastUpdateNumComponentsRemoved;
    
    UPROPERTY()
    int32 NumSplineMeshComponents;
    
    UPROPERTY()
    FGuid GeneratedSplinesMeshPackageGuid;
    
    UPROPERTY()
    UStaticMesh* GeneratedSplinesMesh;
    
    UPROPERTY()
    bool bUsedMergeSplinesMeshAtLastTranslate;
    
public:
    UHoudiniInputActor();

};

