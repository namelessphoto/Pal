#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "PalDungeonGimmickMovingFloorPoint.h"
#include "PalDungeonGimmick_MovingFloor.generated.h"

class UMovementComponent;
class UNiagaraSystem;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class PAL_API APalDungeonGimmick_MovingFloor : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float StartPointWaitTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDungeonGimmickMovingFloorPoint> PatrolPointOffsets;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* DefaultFXAtPatrolPoint;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckReachPatrolPointInDedicatedServer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FloorMesh;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FVector> PatrolPointWorldLocations;
    
public:
    APalDungeonGimmick_MovingFloor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintPure)
    bool TryGetPatrolPointWorldLocation(const int32 Index, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetPatrolPointInfo(const int32 Index, FPalDungeonGimmickMovingFloorPoint& OutInfo) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReachPatrolPoint_BP(const int32 ReachPatrolPointIndex, const FPalDungeonGimmickMovingFloorPoint& PointInfo);
    
};

