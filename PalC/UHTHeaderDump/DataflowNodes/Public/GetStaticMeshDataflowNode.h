#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetStaticMeshDataflowNode.generated.h"

class UStaticMesh;

USTRUCT()
struct DATAFLOWNODES_API FGetStaticMeshDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(EditAnywhere)
    FName PropertyName;
    
    FGetStaticMeshDataflowNode();
};

