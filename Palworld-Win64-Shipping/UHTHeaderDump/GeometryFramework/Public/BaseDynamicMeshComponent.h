#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=ToolFrameworkComponent -FallbackName=ToolFrameworkComponent
#include "EDynamicMeshComponentColorOverrideMode.h"
#include "MeshCommandChangeTarget.h"
#include "MeshReplacementCommandChangeTarget.h"
#include "MeshVertexCommandChangeTarget.h"
#include "BaseDynamicMeshComponent.generated.h"

class UDynamicMesh;
class UMaterialInterface;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYFRAMEWORK_API UBaseDynamicMeshComponent : public UMeshComponent, public IToolFrameworkComponent, public IMeshVertexCommandChangeTarget, public IMeshCommandChangeTarget, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExplicitShowWireframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor WireframeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDynamicMeshComponentColorOverrideMode ColorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor ConstantColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableFlatShading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableViewModeOverrides;
    
protected:
    UPROPERTY()
    UMaterialInterface* OverrideRenderMaterial;
    
    UPROPERTY()
    UMaterialInterface* SecondaryRenderMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableRayTracing;
    
    UPROPERTY()
    TArray<UMaterialInterface*> BaseMaterials;
    
    UBaseDynamicMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewModeOverridesEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryRenderMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryBuffersVisibility(bool bSetVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideRenderMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWireframeRenderPass(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRaytracing(bool bSetEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFlatShading(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetConstantOverrideColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);
    
    UFUNCTION(BlueprintPure)
    bool HasOverrideRenderMaterial(int32 K) const;
    
    UFUNCTION(BlueprintPure)
    bool GetViewModeOverridesEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShadowsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetSecondaryRenderMaterial() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSecondaryBuffersVisibility() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFlatShadingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableWireframeRenderPass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableRaytracing() const;
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* GetDynamicMesh();
    
    UFUNCTION(BlueprintPure)
    FColor GetConstantOverrideColor() const;
    
    UFUNCTION(BlueprintPure)
    EDynamicMeshComponentColorOverrideMode GetColorOverrideMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSecondaryRenderMaterial();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideRenderMaterial();
    

    // Fix for true pure virtual functions not being implemented
};

