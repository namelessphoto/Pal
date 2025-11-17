#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "MRMeshComponent.generated.h"

class UMRMeshBodyHolder;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MRMESH_API UMRMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* WireframeMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bCreateMeshProxySections;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateNavMeshOnMeshUpdate;
    
    UPROPERTY(EditAnywhere)
    bool bNeverCreateCollisionMesh;
    
    UPROPERTY(Transient)
    TArray<UMRMeshBodyHolder*> BodyHolders;
    
public:
    UMRMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWireframeMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetWireframeColor(const FLinearColor& inColor);
    
    UFUNCTION(BlueprintCallable)
    void SetUseWireframe(bool bUseWireframe);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMeshOcclusion(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestNavMeshUpdate();
    
    UFUNCTION(BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetWireframeColor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseWireframe() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableMeshOcclusion() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNavMeshUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

