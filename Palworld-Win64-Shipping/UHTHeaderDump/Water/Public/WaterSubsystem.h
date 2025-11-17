#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "OnCameraUnderwaterStateChangedDelegate.h"
#include "OnWaterScalabilityChangedDelegate.h"
#include "WaterSubsystem.generated.h"

class ABuoyancyManager;
class UMaterialParameterCollection;
class UStaticMesh;

UCLASS(BlueprintType, Transient)
class WATER_API UWaterSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ABuoyancyManager* BuoyancyManager;
    
    UPROPERTY(BlueprintAssignable)
    FOnCameraUnderwaterStateChanged OnCameraUnderwaterStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaterScalabilityChanged OnWaterScalabilityChanged;
    
    UPROPERTY()
    UStaticMesh* DefaultRiverMesh;
    
    UPROPERTY()
    UStaticMesh* DefaultLakeMesh;
    
private:
    UPROPERTY()
    UMaterialParameterCollection* MaterialParameterCollection;
    
public:
    UWaterSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetOceanFloodHeight(float InFloodHeight);
    
    UFUNCTION(BlueprintCallable)
    void PrintToWaterLog(const FString& Message, bool bWarning);
    
    UFUNCTION(BlueprintPure)
    bool IsWaterRenderingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnderwaterPostProcessEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShallowWaterSimulationEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterTimeSeconds() const;
    
    UFUNCTION(BlueprintPure)
    float GetSmoothedWorldTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterSimulationRenderTargetSize();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterMaxImpulseForces();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterMaxDynamicForces();
    
    UFUNCTION(BlueprintPure)
    float GetOceanTotalHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetOceanFloodHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetOceanBaseHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraUnderwaterDepth() const;
    
};

