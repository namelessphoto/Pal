#pragma once
#include "CoreMinimal.h"
#include "EClusterUnionMethod.h"
#include "SolverBreakingFilterSettings.h"
#include "SolverCollisionFilterSettings.h"
#include "SolverTrailingFilterSettings.h"
#include "ChaosSolverConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FChaosSolverConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PositionIterations;
    
    UPROPERTY(EditAnywhere)
    int32 VelocityIterations;
    
    UPROPERTY(EditAnywhere)
    int32 ProjectionIterations;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginFraction;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginMax;
    
    UPROPERTY(EditAnywhere)
    float CollisionCullDistance;
    
    UPROPERTY(EditAnywhere)
    float CollisionMaxPushOutVelocity;
    
    UPROPERTY(EditAnywhere)
    float ClusterConnectionFactor;
    
    UPROPERTY(EditAnywhere)
    EClusterUnionMethod ClusterUnionConnectionType;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateCollisionData;
    
    UPROPERTY(EditAnywhere)
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateBreakData;
    
    UPROPERTY(EditAnywhere)
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateTrailingData;
    
    UPROPERTY(EditAnywhere)
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
private:
    UPROPERTY()
    int32 Iterations;
    
    UPROPERTY()
    int32 PushOutIterations;
    
    UPROPERTY()
    bool bGenerateContactGraph;
    
public:
    CHAOS_API FChaosSolverConfiguration();
};

