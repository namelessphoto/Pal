#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectStaticMeshComponentBase.h"
#include "PalMapObjectStaticMeshComponentHiddenInNoItem.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectItemContainerModule;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectStaticMeshComponentHiddenInNoItem : public UPalMapObjectStaticMeshComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ExistsItems)
    bool bExistsItems;
    
public:
    UPalMapObjectStaticMeshComponentHiddenInNoItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateItemContainerContents(UPalMapObjectItemContainerModule* Module);
    
    UFUNCTION()
    void OnSetConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnRep_ExistsItems();
    
    UFUNCTION()
    void OnReadyModule_ServerInternal(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module);
    
};

