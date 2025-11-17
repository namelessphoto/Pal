#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "InteractiveFoliageActor.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(MinimalAPI)
class AInteractiveFoliageActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(Transient)
    FVector TouchingActorEntryPosition;
    
    UPROPERTY(Transient)
    FVector FoliageVelocity;
    
    UPROPERTY(Transient)
    FVector FoliageForce;
    
    UPROPERTY(Transient)
    FVector FoliagePosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageDamageImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageTouchImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageStiffnessQuadratic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTouchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForce;
    
    UPROPERTY()
    float Mass;
    
    AInteractiveFoliageActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
};

