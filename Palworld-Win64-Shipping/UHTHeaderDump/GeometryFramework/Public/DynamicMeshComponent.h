#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KAggregateGeom -FallbackName=KAggregateGeom
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "BaseDynamicMeshComponent.h"
#include "EDynamicMeshComponentTangentsMode.h"
#include "DynamicMeshComponent.generated.h"

class UBodySetup;
class UDynamicMesh;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYFRAMEWORK_API UDynamicMeshComponent : public UBaseDynamicMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UDynamicMesh* MeshObject;
    
    UPROPERTY()
    EDynamicMeshComponentTangentsMode TangentsType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> CollisionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAsyncCooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableComplexCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeferCollisionUpdates;
    
protected:
    UPROPERTY(Instanced)
    UBodySetup* MeshBodySetup;
    
    UPROPERTY(EditAnywhere)
    FKAggregateGeom AggGeom;
    
    UPROPERTY(Transient)
    TArray<UBodySetup*> AsyncBodySetupQueue;
    
public:
    UDynamicMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollision(bool bOnlyIfPending);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicMesh(UDynamicMesh* NewMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
    
    UFUNCTION(BlueprintPure)
    EDynamicMeshComponentTangentsMode GetTangentsType() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableComplexAsSimpleCollision();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureMaterialSet(const TArray<UMaterialInterface*>& NewMaterialSet);
    

    // Fix for true pure virtual functions not being implemented
};

