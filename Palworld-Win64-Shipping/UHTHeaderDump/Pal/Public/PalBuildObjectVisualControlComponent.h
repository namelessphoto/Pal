#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalBuildObjectMaterialArray.h"
#include "PalBuildObjectMaterialInstanceDynamicArray.h"
#include "PalBuildObjectVisualControlComponent.generated.h"

class UChildActorComponent;
class UDecalComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UNiagaraComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBuildObjectVisualControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UMeshComponent*, FPalBuildObjectMaterialArray> NormalMaterialMapCache;
    
    UPROPERTY(Transient)
    TMap<UMeshComponent*, FPalBuildObjectMaterialInstanceDynamicArray> MaterialInstanceDynamicMapCache;
    
    UPROPERTY(Transient)
    TMap<UDecalComponent*, UMaterialInterface*> DecalNormalMaterialMapCache;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* DamageNiagaraComp;
    
public:
    UPalBuildObjectVisualControlComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnReplicatedChildActor(UChildActorComponent* ChildActorComponent);
    
public:
    UFUNCTION(BlueprintPure)
    UMaterialInstance* GetMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex);
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex);
    
};

