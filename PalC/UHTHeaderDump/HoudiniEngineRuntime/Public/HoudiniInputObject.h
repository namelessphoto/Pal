#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EHoudiniInputObjectType.h"
#include "HoudiniInputObjectSettings.h"
#include "HoudiniInputObject.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UObject> InputObject;
    
    UPROPERTY()
    EHoudiniInputObjectType Type;
    
    UPROPERTY(DuplicateTransient)
    FGuid Guid;
    
protected:
    UPROPERTY(DuplicateTransient)
    bool bHasChanged;
    
    UPROPERTY(DuplicateTransient)
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY(DuplicateTransient)
    bool bTransformChanged;
    
    UPROPERTY()
    TArray<FString> MaterialReferences;
    
    UPROPERTY()
    FHoudiniInputObjectSettings CachedInputSettings;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
    UPROPERTY()
    bool bInputNodeHandleOverridesNodeIds;
    
    UPROPERTY()
    FTransform Transform;
    
public:
    UPROPERTY()
    FRotator UserInputRotator;
    
private:
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputNodeId;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputObjectNodeId;
    
public:
    UHoudiniInputObject();

};

