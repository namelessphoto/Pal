#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakePointsDataflowNode.generated.h"

USTRUCT()
struct FMakePointsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector> Point;
    
    UPROPERTY()
    TArray<FVector> Points;
    
    GEOMETRYCOLLECTIONNODES_API FMakePointsDataflowNode();
};

