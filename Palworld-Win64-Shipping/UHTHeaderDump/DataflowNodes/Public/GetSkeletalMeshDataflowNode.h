#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetSkeletalMeshDataflowNode.generated.h"

class USkeletalMesh;

USTRUCT()
struct DATAFLOWNODES_API FGetSkeletalMeshDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    FName PropertyName;
    
    FGetSkeletalMeshDataflowNode();
};

