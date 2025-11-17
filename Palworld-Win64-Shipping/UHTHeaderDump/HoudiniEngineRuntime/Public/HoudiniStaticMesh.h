#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMaterial -FallbackName=StaticMaterial
#include "HoudiniStaticMesh.generated.h"

class UMaterialInterface;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniStaticMesh : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bHasNormals;
    
    UPROPERTY()
    bool bHasTangents;
    
    UPROPERTY()
    bool bHasColors;
    
    UPROPERTY()
    uint32 NumUVLayers;
    
    UPROPERTY()
    bool bHasPerFaceMaterials;
    
    UPROPERTY(SkipSerialization)
    TArray<FVector3f> VertexPositions;
    
    UPROPERTY(SkipSerialization)
    TArray<FIntVector> TriangleIndices;
    
    UPROPERTY(SkipSerialization)
    TArray<FColor> VertexInstanceColors;
    
    UPROPERTY(SkipSerialization)
    TArray<FVector3f> VertexInstanceNormals;
    
    UPROPERTY(SkipSerialization)
    TArray<FVector3f> VertexInstanceUTangents;
    
    UPROPERTY(SkipSerialization)
    TArray<FVector3f> VertexInstanceVTangents;
    
    UPROPERTY(SkipSerialization)
    TArray<FVector2f> VertexInstanceUVs;
    
    UPROPERTY(SkipSerialization)
    TArray<int32> MaterialIDsPerTriangle;
    
    UPROPERTY()
    TArray<FStaticMaterial> StaticMaterials;
    
public:
    UHoudiniStaticMesh();

    UFUNCTION()
    void SetVertexPosition(uint32 InVertexIndex, const FVector3f& InPosition);
    
    UFUNCTION()
    void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector3f& InVTangent);
    
    UFUNCTION()
    void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const FVector2f& InUV);
    
    UFUNCTION()
    void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector3f& InUTangent);
    
    UFUNCTION()
    void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector3f& InNormal);
    
    UFUNCTION()
    void SetTriangleVertexIndices(uint32 InTriangleIndex, const FIntVector& InTriangleVertexIndices);
    
    UFUNCTION()
    void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FColor& inColor);
    
    UFUNCTION()
    void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);
    
    UFUNCTION()
    void SetStaticMaterial(uint32 InMaterialIndex, const FStaticMaterial& InStaticMaterial);
    
    UFUNCTION()
    void SetNumUVLayers(uint32 InNumUVLayers);
    
    UFUNCTION()
    void SetNumStaticMaterials(uint32 InNumStaticMaterials);
    
    UFUNCTION()
    void SetHasTangents(bool bInHasTangents);
    
    UFUNCTION()
    void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
    
    UFUNCTION()
    void SetHasNormals(bool bInHasNormals);
    
    UFUNCTION()
    void SetHasColors(bool bInHasColors);
    
    UFUNCTION()
    void Optimize();
    
    UFUNCTION()
    bool IsValid(bool bInSkipVertexIndicesCheck) const;
    
    UFUNCTION()
    void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
    
    UFUNCTION()
    bool HasTangents() const;
    
    UFUNCTION()
    bool HasPerFaceMaterials() const;
    
    UFUNCTION()
    bool HasNormals() const;
    
    UFUNCTION()
    bool HasColors() const;
    
    UFUNCTION()
    TArray<FVector3f> GetVertexPositions() const;
    
    UFUNCTION()
    TArray<FVector3f> GetVertexInstanceVTangents() const;
    
    UFUNCTION()
    TArray<FVector2f> GetVertexInstanceUVs() const;
    
    UFUNCTION()
    TArray<FVector3f> GetVertexInstanceUTangents() const;
    
    UFUNCTION()
    TArray<FVector3f> GetVertexInstanceNormals() const;
    
    UFUNCTION()
    TArray<FColor> GetVertexInstanceColors() const;
    
    UFUNCTION()
    TArray<FIntVector> GetTriangleIndices() const;
    
    UFUNCTION()
    TArray<FStaticMaterial> GetStaticMaterials() const;
    
    UFUNCTION()
    uint32 GetNumVertices() const;
    
    UFUNCTION()
    uint32 GetNumVertexInstances() const;
    
    UFUNCTION()
    uint32 GetNumUVLayers() const;
    
    UFUNCTION()
    uint32 GetNumTriangles() const;
    
    UFUNCTION()
    uint32 GetNumStaticMaterials() const;
    
    UFUNCTION()
    int32 GetMaterialIndex(FName InMaterialSlotName) const;
    
    UFUNCTION()
    TArray<int32> GetMaterialIDsPerTriangle() const;
    
    UFUNCTION()
    UMaterialInterface* GetMaterial(int32 InMaterialIndex);
    
    UFUNCTION()
    void CalculateTangents(bool bInComputeWeightedNormals);
    
    UFUNCTION()
    void CalculateNormals(bool bInComputeWeightedNormals);
    
    UFUNCTION()
    FBox CalcBounds() const;
    
    UFUNCTION()
    uint32 AddStaticMaterial(const FStaticMaterial& InStaticMaterial);
    
};

