#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "UniformScatterPointsDataflowNode.generated.h"

USTRUCT()
struct FUniformScatterPointsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinNumberOfPoints;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberOfPoints;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY()
    FBox BoundingBox;
    
    UPROPERTY()
    TArray<FVector> Points;
    
    GEOMETRYCOLLECTIONNODES_API FUniformScatterPointsDataflowNode();
};

