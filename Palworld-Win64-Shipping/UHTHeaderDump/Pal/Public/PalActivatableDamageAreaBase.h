#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalActivatableDamageAreaState.h"
#include "FloatCounter.h"
#include "PalActivatableDamageAreaBase.generated.h"

class UPalHitFilter;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Abstract)
class PAL_API APalActivatableDamageAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPalHitFilter* HitFilter;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DamageValue;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalActivatableDamageAreaState State;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 ActivatedCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 ActivateLoopNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatCounter ActivateLoopTimeCounter;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatCounter InactivateLoopTimeCounter;
    
public:
    APalActivatableDamageAreaBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void StartInactivateAnimation();
    
    UFUNCTION(BlueprintNativeEvent)
    void StartActivateAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitDamageVolume_BP(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    
    UFUNCTION()
    void OnHitDamageVolume(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    UShapeComponent* GetDamageVolumeComponent();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastInactivate_Multicast();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastActivate_Multicast();
    
};

