#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectGenerateEnergy.generated.h"

class UPalWorkBase;

UCLASS()
class APalBuildObjectGenerateEnergy : public APalBuildObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Generating)
    bool bGenerating;
    
public:
    APalBuildObjectGenerateEnergy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateWorkAssigned_ServerInternal(UPalWorkBase* Work);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartGenerate();
    
    UFUNCTION()
    void OnRep_Generating(const bool bOldValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndGenerate();
    
};

