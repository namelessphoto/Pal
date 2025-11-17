#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EWaterBodyType.h"
#include "WaterBrushActorInterface.h"
#include "WaterBody.generated.h"

class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterBodyComponent;
class UWaterSplineComponent;
class UWaterSplineMetadata;
class UWaterWavesBase;

UCLASS(Abstract)
class WATER_API AWaterBody : public AActor, public IWaterBrushActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UWaterSplineComponent* SplineComp;
    
    UPROPERTY(Instanced)
    UWaterSplineMetadata* WaterSplineMetadata;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UWaterBodyComponent* WaterBodyComponent;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, NonTransactional, Transient)
    int32 WaterBodyIndex;
    
    UPROPERTY(EditDefaultsOnly)
    EWaterBodyType WaterBodyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWaterWavesBase* WaterWaves;
    
public:
    AWaterBody(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterWaves(UWaterWavesBase* InWaterWaves);
    
    UFUNCTION(BlueprintCallable)
    void SetWaterMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    
    UFUNCTION(BlueprintPure)
    FVector GetWaterVelocityVectorAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterVelocityAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    EWaterBodyType GetWaterBodyType() const;
    
    UFUNCTION(BlueprintPure)
    UWaterBodyComponent* GetWaterBodyComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    TArray<AWaterBodyIsland*> GetIslands() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
    
    UFUNCTION(BlueprintPure)
    float GetAudioIntensityAtSplineInputKey(float InKey) const;
    

    // Fix for true pure virtual functions not being implemented
};

