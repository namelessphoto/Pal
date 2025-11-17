#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHoudiniOutputType.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniInstancedOutput.h"
#include "HoudiniMaterialIdentifier.h"
#include "HoudiniOutputObject.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniOutput.generated.h"

class AActor;
class UMaterialInterface;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniOutput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EHoudiniOutputType Type;
    
    UPROPERTY()
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;
    
    UPROPERTY(DuplicateTransient)
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;
    
    UPROPERTY()
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;
    
    UPROPERTY()
    TMap<FString, UMaterialInterface*> AssignementMaterials;
    
    UPROPERTY()
    TMap<FHoudiniMaterialIdentifier, UMaterialInterface*> AssignmentMaterialsById;
    
    UPROPERTY()
    TMap<FString, UMaterialInterface*> ReplacementMaterials;
    
    UPROPERTY()
    TMap<FHoudiniMaterialIdentifier, UMaterialInterface*> ReplacementMaterialsById;
    
    UPROPERTY()
    bool bLandscapeWorldComposition;
    
    UPROPERTY()
    TArray<AActor*> HoudiniCreatedSocketActors;
    
    UPROPERTY()
    TArray<AActor*> HoudiniAttachedSocketActors;
    
private:
    UPROPERTY()
    bool bIsEditableNode;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasEditableNodeBuilt;
    
    UPROPERTY()
    bool bIsUpdating;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
public:
    UHoudiniOutput();

};

