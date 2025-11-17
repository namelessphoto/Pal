#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "PalInstanceID.h"
#include "PalSpeedCollisionComponent.generated.h"

class AActor;
class UPalActionBase;
class UPalActionComponent;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSpeedCollisionComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool IsSelfEnable;
    
    UPROPERTY(Transient)
    TArray<FPalInstanceID> HitPalList;
    
public:
    UPalSpeedCollisionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnAllActionEnd(const UPalActionComponent* ActionComponent);
    
    UFUNCTION()
    void OnActionBegin(const UPalActionBase* action);
    
    UFUNCTION()
    void DelayRemoveInterval();
    
public:
    UFUNCTION()
    void BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

