#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERigTransformStackEntryType.h"
#include "ERigTransformType.h"
#include "RigElementKey.h"
#include "RigTransformStackEntry.generated.h"

USTRUCT()
struct FRigTransformStackEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Key;
    
    UPROPERTY()
    TEnumAsByte<ERigTransformStackEntryType> EntryType;
    
    UPROPERTY()
    TEnumAsByte<ERigTransformType> TransformType;
    
    UPROPERTY()
    FTransform OldTransform;
    
    UPROPERTY()
    FTransform NewTransform;
    
    UPROPERTY()
    bool bAffectChildren;
    
    UPROPERTY()
    TArray<FString> Callstack;
    
    CONTROLRIG_API FRigTransformStackEntry();
};

