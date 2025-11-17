#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "Templates/SubclassOf.h"
#include "UnderwaterPostProcessSettings.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterCurveSettings.h"
#include "WaterBodyComponent.generated.h"

class ALandscapeProxy;
class AWaterBody;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class AWaterZone;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNavAreaBase;
class UPhysicalMaterial;
class UStaticMesh;
class UWaterSplineComponent;
class UWaterSplineMetadata;
class UWaterWavesBase;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetWaveMaskDepth;
    
    UPROPERTY(EditAnywhere)
    float MaxWaveHeightOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterCurveSettings CurveSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* WaterMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* WaterHLODMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* WaterLODMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* UnderwaterPostProcessMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* WaterInfoMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaterBodyHeightmapSettings WaterHeightmapSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ShapeDilation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CollisionHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAffectsLandscape;
    
protected:
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, NonTransactional, Transient, VisibleAnywhere)
    int32 WaterBodyIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* WaterMeshOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bAlwaysGenerateWaterMeshTiles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OverlapMaterialPriority;
    
    UPROPERTY(Transient)
    UWaterSplineMetadata* WaterSplineMetadata;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient, VisibleInstanceOnly)
    UMaterialInstanceDynamic* WaterMID;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient, VisibleInstanceOnly)
    UMaterialInstanceDynamic* WaterLODMID;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient, VisibleInstanceOnly)
    UMaterialInstanceDynamic* UnderwaterPostProcessMID;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient, VisibleInstanceOnly)
    UMaterialInstanceDynamic* WaterInfoMID;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<TSoftObjectPtr<AWaterBodyIsland>> WaterBodyIslands;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<TSoftObjectPtr<AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ALandscapeProxy> Landscape;
    
    UPROPERTY()
    TSoftObjectPtr<AWaterZone> OwningWaterZone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AWaterZone> WaterZoneOverride;
    
    UPROPERTY(Transient)
    FPostProcessSettings CurrentPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavAreaBase> WaterNavAreaClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    double FixedWaterDepth;
    
public:
    UWaterBodyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterAndUnderWaterPostProcessMaterial(UMaterialInterface* InWaterMaterial, UMaterialInterface* InUnderWaterPostProcessMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    
    UFUNCTION(BlueprintPure)
    UWaterWavesBase* GetWaterWaves() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterVelocityAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintPure)
    void GetWaterSurfaceInfoAtLocation(const FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth) const;
    
    UFUNCTION(BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetWaterMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterLODMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    AWaterBody* GetWaterBodyActor() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    TArray<UPrimitiveComponent*> GetStandardRenderableComponents() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    
    UFUNCTION(BlueprintPure)
    float GetMaxWaveHeight() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AWaterBodyIsland*> GetIslands() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents) const;
    
};

