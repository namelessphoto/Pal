#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LandscapePerLODMaterialOverride.h"
#include "WeightmapLayerAllocationInfo.h"
#include "LandscapeComponent.generated.h"

class ULandscapeHeightfieldCollisionComponent;
class ULandscapeLayerInfoObject;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;

UCLASS(MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SectionBaseX;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SectionBaseY;
    
    UPROPERTY()
    int32 ComponentSizeQuads;
    
    UPROPERTY()
    int32 SubsectionSizeQuads;
    
    UPROPERTY()
    int32 NumSubsections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverrideHoleMaterial;
    
    UPROPERTY(TextExportTransient)
    TArray<UMaterialInstanceConstant*> MaterialInstances;
    
    UPROPERTY(TextExportTransient, Transient)
    TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic;
    
    UPROPERTY(TextExportTransient)
    TArray<int8> LODIndexToMaterialIndex;
    
    UPROPERTY()
    UTexture2D* XYOffsetmapTexture;
    
    UPROPERTY()
    FVector4 WeightmapScaleBias;
    
    UPROPERTY()
    float WeightmapSubsectionOffset;
    
    UPROPERTY()
    FVector4 HeightmapScaleBias;
    
    UPROPERTY()
    FBox CachedLocalBox;
    
    UPROPERTY(Export)
    TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent;
    
private:
    UPROPERTY(Transient)
    bool bNaniteActive;
    
    UPROPERTY()
    UTexture2D* HeightmapTexture;
    
    UPROPERTY()
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
    
    UPROPERTY()
    TArray<UTexture2D*> WeightmapTextures;
    
    UPROPERTY(EditAnywhere)
    TArray<FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;
    
public:
    UPROPERTY()
    FGuid MapBuildDataId;
    
    UPROPERTY()
    TArray<FGuid> IrrelevantLights;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    int32 SimpleCollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    float NegativeZBoundsExtension;
    
    UPROPERTY(EditAnywhere)
    float PositiveZBoundsExtension;
    
    UPROPERTY(EditAnywhere)
    float StaticLightingResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ForcedLOD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LODBias;
    
    UPROPERTY()
    FGuid StateId;
    
    UPROPERTY()
    FGuid BakedTextureMaterialGuid;
    
    UPROPERTY(Transient)
    FGuid LastBakedTextureMaterialGuid;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTexture2D* GIBakedBaseColorTexture;
    
    UPROPERTY(NonPIEDuplicateTransient)
    UMaterialInterface* MobileMaterialInterface;
    
    UPROPERTY(NonPIEDuplicateTransient)
    TArray<UMaterialInterface*> MobileMaterialInterfaces;
    
    UPROPERTY(NonPIEDuplicateTransient)
    TArray<UTexture2D*> MobileWeightmapTextures;
    
    ULandscapeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLODBias(int32 InLODBias);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLOD(int32 InForcedLOD);
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);
    
};

