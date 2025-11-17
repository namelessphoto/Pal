#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "FloatCounter.h"
#include "PalItemFlowInSplineInfo.h"
#include "Templates/SubclassOf.h"
#include "PalItemFlowSplineComponent.generated.h"

class AActor;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalItemFlowSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float ItemSpawnInterval;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float FlowSpeedRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatCounter FlowingItemSpawnTimer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSubclassOf<AActor> ItemVisualBlueprintClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalItemFlowInSplineInfo> FlowingItemInfos;
    
public:
    UPalItemFlowSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTargetItem(const FName InStaticItemId);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsFlowing(const bool bOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateBuildObjectVisual(const UPalMapObjectConcreteModelBase* MapObjectConcreteModel);
    
protected:
    UFUNCTION(BlueprintPure)
    static FLinearColor GetMaterialInstanceVectorParameterValue(UMaterialInstance* MaterialInstance, const FName ParameterName);
    
    UFUNCTION(BlueprintPure)
    UMaterialInstance* GetBuildObjectMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex) const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetBuildObjectMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex) const;
    
};

