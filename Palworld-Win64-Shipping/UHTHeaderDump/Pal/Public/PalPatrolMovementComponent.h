#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetworkPredictionInterface -FallbackName=NetworkPredictionInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
#include "PalPatrolMovementPoint.h"
#include "PalPatrolMovementComponent.generated.h"

class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalPatrolMovementComponent : public UPawnMovementComponent, public INetworkPredictionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float NetworkSimulatedSmoothLocationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float ListenServerNetworkSimulatedSmoothLocationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkMaxSmoothUpdateDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkNoSmoothUpdateDistance;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* TargetMesh;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalPatrolMovementPoint> PatrolPoints;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProgressTimeForServer;
    
public:
    UPalPatrolMovementComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

