#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDeadInfo.h"
#include "PalOilrigMachineSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalOilrigMachineSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeadMachineDelegate, FPalDeadInfo, DeadInfo);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float SpawnDistanceFromPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float DespawnDistanceFromPlayer;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnDeadMachineDelegate OnDeadMachineDelegate;
    
private:
    UPROPERTY(Transient)
    bool IsSpawned;
    
    UPROPERTY(Transient)
    FVector MachineStartPoint;
    
    UPROPERTY(Transient)
    FRotator MachineStartRotate;
    
    UPROPERTY(Transient)
    bool IsMachineDestroyed;
    
public:
    UPalOilrigMachineSpawnerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnMachine(FVector Location, FRotator Rotate);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadMachine(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DespawnMachine();
    
};

