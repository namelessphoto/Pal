#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalCopyMeshVisualEffect.generated.h"

class UCapsuleComponent;
class UMaterialInstanceDynamic;
class UPalPoseableMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS()
class APalCopyMeshVisualEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UCapsuleComponent* RootCapsule;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalPoseableMeshComponent* PoseableSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalPoseableMeshComponent* PoseableSkeletalMeshRideNPCComponent;
    
    APalCopyMeshVisualEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupMonsterRideNPCMesh(USkeletalMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetupMainMesh(USkeletalMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainMeshMaterials() const;
    
    UFUNCTION(BlueprintPure)
    USkinnedMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintPure)
    void GetAllMesh(TArray<USceneComponent*>& OutComponent) const;
    
};

