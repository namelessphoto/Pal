#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "SkeletalMeshBoneDataflowNode.generated.h"

class USkeletalMesh;

USTRUCT()
struct DATAFLOWNODES_API FSkeletalMeshBoneDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY()
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY()
    int32 BoneIndexOut;
    
    FSkeletalMeshBoneDataflowNode();
};

