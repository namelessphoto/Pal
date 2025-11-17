#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERigElementType.h"
#include "RigHierarchyCopyPasteContentPerElement.h"
#include "RigHierarchyCopyPasteContent.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigHierarchyCopyPasteContent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigHierarchyCopyPasteContentPerElement> Elements;
    
    UPROPERTY()
    TArray<ERigElementType> Types;
    
    UPROPERTY()
    TArray<FString> Contents;
    
    UPROPERTY()
    TArray<FTransform> LocalTransforms;
    
    UPROPERTY()
    TArray<FTransform> GlobalTransforms;
    
    FRigHierarchyCopyPasteContent();
};

