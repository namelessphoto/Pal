#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RadialScatterPointsDataflowNode.generated.h"

USTRUCT()
struct FRadialScatterPointsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FVector Normal;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    int32 AngularSteps;
    
    UPROPERTY(EditAnywhere)
    int32 RadialSteps;
    
    UPROPERTY(EditAnywhere)
    float AngleOffset;
    
    UPROPERTY(EditAnywhere)
    float Variability;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY()
    TArray<FVector> Points;
    
    GEOMETRYCOLLECTIONNODES_API FRadialScatterPointsDataflowNode();
};

