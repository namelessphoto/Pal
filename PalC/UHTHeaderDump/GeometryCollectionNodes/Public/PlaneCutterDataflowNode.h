#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "PlaneCutterDataflowNode.generated.h"

USTRUCT()
struct FPlaneCutterDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    UPROPERTY()
    FBox BoundingBox;
    
    UPROPERTY(EditAnywhere)
    int32 NumPlanes;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY(EditAnywhere)
    float Grout;
    
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Persistence;
    
    UPROPERTY(EditAnywhere)
    float Lacunarity;
    
    UPROPERTY(EditAnywhere)
    int32 OctaveNumber;
    
    UPROPERTY(EditAnywhere)
    float PointSpacing;
    
    UPROPERTY(EditAnywhere)
    bool AddSamplesForCollision;
    
    UPROPERTY(EditAnywhere)
    float CollisionSampleSpacing;
    
    GEOMETRYCOLLECTIONNODES_API FPlaneCutterDataflowNode();
};

