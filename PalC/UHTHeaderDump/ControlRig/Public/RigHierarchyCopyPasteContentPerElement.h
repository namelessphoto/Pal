#pragma once
#include "CoreMinimal.h"
#include "RigCurrentAndInitialTransform.h"
#include "RigElementKey.h"
#include "RigElementWeight.h"
#include "RigHierarchyCopyPasteContentPerElement.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigHierarchyCopyPasteContentPerElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Key;
    
    UPROPERTY()
    FString Content;
    
    UPROPERTY()
    TArray<FRigElementKey> Parents;
    
    UPROPERTY()
    TArray<FRigElementWeight> ParentWeights;
    
    UPROPERTY()
    FRigCurrentAndInitialTransform Pose;
    
    FRigHierarchyCopyPasteContentPerElement();
};

