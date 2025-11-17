#ifndef UE4SS_SDK_MRMesh_HPP
#define UE4SS_SDK_MRMesh_HPP

#include "MRMesh_enums.hpp"

struct FMRMeshConfiguration
{
};

class UMRMeshBodyHolder : public UObject
{
    class UBodySetup* BodySetup;
    FBodyInstance BodyInstance;

};

class UMRMeshComponent : public UPrimitiveComponent
{
    class UMaterialInterface* Material;
    class UMaterialInterface* WireframeMaterial;
    bool bCreateMeshProxySections;
    bool bUpdateNavMeshOnMeshUpdate;
    bool bNeverCreateCollisionMesh;
    TArray<class UMRMeshBodyHolder*> BodyHolders;

    void SetWireframeMaterial(class UMaterialInterface* InMaterial);
    void SetWireframeColor(const FLinearColor& inColor);
    void SetUseWireframe(bool bUseWireframe);
    void SetEnableMeshOcclusion(bool bEnable);
    void RequestNavMeshUpdate();
    bool IsConnected();
    FLinearColor GetWireframeColor();
    bool GetUseWireframe();
    bool GetEnableMeshOcclusion();
    void ForceNavMeshUpdate();
    void Clear();
};

class UMeshReconstructorBase : public UObject
{

    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

class UMockDataMeshTrackerComponent : public USceneComponent
{
    FMockDataMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;
    void OnMockDataMeshTrackerUpdated(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& normals, const TArray<float>& Confidence);
    bool ScanWorld;
    bool RequestNormals;
    bool RequestVertexConfidence;
    EMeshTrackerVertexColorMode VertexColorMode;
    TArray<FColor> BlockVertexColors;
    FLinearColor VertexColorFromConfidenceZero;
    FLinearColor VertexColorFromConfidenceOne;
    float UpdateInterval;
    class UMRMeshComponent* MRMesh;

    void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& normals, const TArray<float>& Confidence);
    void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

#endif
