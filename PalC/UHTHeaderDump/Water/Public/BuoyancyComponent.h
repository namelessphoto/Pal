#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BuoyancyData.h"
#include "OnPontoonEnteredWaterDelegate.h"
#include "OnPontoonExitedWaterDelegate.h"
#include "SphericalPontoon.h"
#include "BuoyancyComponent.generated.h"

class UPrimitiveComponent;
class UWaterBodyComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class WATER_API UBuoyancyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSphericalPontoon> Pontoons;
    
    UPROPERTY(BlueprintAssignable)
    FOnPontoonEnteredWater OnEnteredWaterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPontoonExitedWater OnExitedWaterDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBuoyancyData BuoyancyData;
    
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UWaterBodyComponent*> CurrentWaterBodyComponents;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* SimulatingComponent;
    
public:
    UBuoyancyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    
    UFUNCTION(BlueprintCallable)
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    
    UFUNCTION(BlueprintPure)
    bool IsOverlappingWaterBody() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWaterBody() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity);
    
    UFUNCTION(BlueprintPure)
    TArray<UWaterBodyComponent*> GetCurrentWaterBodyComponents() const;
    
};

