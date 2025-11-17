#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalMapObjectModelEffect_AccumulateTrigger.h"
#include "PalMapObjectModelEffect_Burn.generated.h"

class AActor;
class APalHitCollisionBox;
class UPrimitiveComponent;

UCLASS()
class PAL_API UPalMapObjectModelEffect_Burn : public UPalMapObjectModelEffect_AccumulateTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_Burning)
    bool bBurning;
    
    UPROPERTY(VisibleInstanceOnly)
    float PersistenceValue;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalHitCollisionBox* HitCollisionBox;
    
public:
    UPalMapObjectModelEffect_Burn();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_Burning(bool bLastValue);
    
private:
    UFUNCTION()
    void OnHitCollisionBox(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    
};

