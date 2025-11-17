#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DynamicMeshActor.generated.h"

class UDynamicMesh;
class UDynamicMeshComponent;
class UDynamicMeshPool;

UCLASS()
class GEOMETRYFRAMEWORK_API ADynamicMeshActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableComputeMeshPool;
    
protected:
    UPROPERTY(Transient)
    UDynamicMeshPool* DynamicMeshPool;
    
public:
    ADynamicMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ReleaseComputeMesh(UDynamicMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllComputeMeshes();
    
    UFUNCTION(BlueprintPure)
    UDynamicMeshComponent* GetDynamicMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UDynamicMeshPool* GetComputeMeshPool();
    
    UFUNCTION(BlueprintCallable)
    void FreeAllComputeMeshes();
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* AllocateComputeMesh();
    
};

