#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshAttributeChangeFlags.h"
#include "EDynamicMeshChangeType.h"
#include "DynamicMeshChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYFRAMEWORK_API FDynamicMeshChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDynamicMeshChangeType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDynamicMeshAttributeChangeFlags Flags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsRevertChange;
    
    FDynamicMeshChangeInfo();
};

