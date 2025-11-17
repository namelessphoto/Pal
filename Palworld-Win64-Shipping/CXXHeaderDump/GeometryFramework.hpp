#ifndef UE4SS_SDK_GeometryFramework_HPP
#define UE4SS_SDK_GeometryFramework_HPP

#include "GeometryFramework_enums.hpp"

struct FDynamicMeshChangeInfo
{
    EDynamicMeshChangeType Type;
    EDynamicMeshAttributeChangeFlags Flags;
    bool bIsRevertChange;

};

class ADynamicMeshActor : public AActor
{
    class UDynamicMeshComponent* DynamicMeshComponent;
    bool bEnableComputeMeshPool;
    class UDynamicMeshPool* DynamicMeshPool;

    bool ReleaseComputeMesh(class UDynamicMesh* Mesh);
    void ReleaseAllComputeMeshes();
    class UDynamicMeshComponent* GetDynamicMeshComponent();
    class UDynamicMeshPool* GetComputeMeshPool();
    void FreeAllComputeMeshes();
    class UDynamicMesh* AllocateComputeMesh();
};

class IMeshCommandChangeTarget : public IInterface
{
};

class IMeshReplacementCommandChangeTarget : public IInterface
{
};

class IMeshVertexCommandChangeTarget : public IInterface
{
};

class UBaseDynamicMeshComponent : public UMeshComponent
{
    bool bExplicitShowWireframe;
    FLinearColor WireframeColor;
    EDynamicMeshComponentColorOverrideMode ColorMode;
    FColor ConstantColor;
    bool bEnableFlatShading;
    bool bEnableViewModeOverrides;
    class UMaterialInterface* OverrideRenderMaterial;
    class UMaterialInterface* SecondaryRenderMaterial;
    bool bEnableRayTracing;
    TArray<class UMaterialInterface*> BaseMaterials;

    void SetViewModeOverridesEnabled(bool bEnabled);
    void SetShadowsEnabled(bool bEnabled);
    void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
    void SetSecondaryBuffersVisibility(bool bSetVisible);
    void SetOverrideRenderMaterial(class UMaterialInterface* Material);
    void SetEnableWireframeRenderPass(bool bEnable);
    void SetEnableRaytracing(bool bSetEnabled);
    void SetEnableFlatShading(bool bEnable);
    void SetConstantOverrideColor(FColor NewColor);
    void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);
    bool HasOverrideRenderMaterial(int32 K);
    bool GetViewModeOverridesEnabled();
    bool GetShadowsEnabled();
    class UMaterialInterface* GetSecondaryRenderMaterial();
    bool GetSecondaryBuffersVisibility();
    class UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex);
    bool GetFlatShadingEnabled();
    bool GetEnableWireframeRenderPass();
    bool GetEnableRaytracing();
    class UDynamicMesh* GetDynamicMesh();
    FColor GetConstantOverrideColor();
    EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();
    void ClearSecondaryRenderMaterial();
    void ClearOverrideRenderMaterial();
};

class UDynamicMesh : public UObject
{
    FDynamicMeshMeshModifiedBPEvent MeshModifiedBPEvent;
    void OnDynamicMeshModifiedBP(class UDynamicMesh* Mesh);
    class UDynamicMeshGenerator* MeshGenerator;
    bool bEnableMeshGenerator;

    class UDynamicMesh* ResetToCube();
    class UDynamicMesh* Reset();
    bool IsEmpty();
    int32 GetTriangleCount();
};

class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
    class UDynamicMesh* MeshObject;
    EDynamicMeshComponentTangentsMode TangentsType;
    TEnumAsByte<ECollisionTraceFlag> CollisionType;
    bool bUseAsyncCooking;
    bool bEnableComplexCollision;
    bool bDeferCollisionUpdates;
    class UBodySetup* MeshBodySetup;
    FKAggregateGeom AggGeom;
    TArray<class UBodySetup*> AsyncBodySetupQueue;

    bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
    void UpdateCollision(bool bOnlyIfPending);
    void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
    void SetDynamicMesh(class UDynamicMesh* NewMesh);
    void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
    void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
    EDynamicMeshComponentTangentsMode GetTangentsType();
    void EnableComplexAsSimpleCollision();
    void ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet);
};

class UDynamicMeshGenerator : public UObject
{
};

class UDynamicMeshPool : public UObject
{
    TArray<class UDynamicMesh*> CachedMeshes;
    TArray<class UDynamicMesh*> AllCreatedMeshes;

    void ReturnMesh(class UDynamicMesh* Mesh);
    void ReturnAllMeshes();
    class UDynamicMesh* RequestMesh();
    void FreeAllMeshes();
};

#endif
