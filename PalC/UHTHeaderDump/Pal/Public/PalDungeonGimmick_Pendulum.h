#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_Pendulum.generated.h"

class AActor;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class PAL_API APalDungeonGimmick_Pendulum : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* PivotPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* PendulumMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* DamageCollision;
    
    UPROPERTY(EditAnywhere)
    float SwingPeriod;
    
    UPROPERTY(EditAnywhere)
    float DampingFactor;
    
    UPROPERTY(EditAnywhere)
    float LaunchStrengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LaunchHeightMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DamageValue;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_SimulateInitialAngle)
    float SimulateInitialAngle;
    
    UPROPERTY()
    TSet<AActor*> DamagedActors;
    
public:
    APalDungeonGimmick_Pendulum(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_SimulateInitialAngle();
    
    UFUNCTION()
    void OnDamageOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

