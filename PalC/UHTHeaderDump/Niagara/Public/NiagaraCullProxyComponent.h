#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "NiagaraCulledComponentInfo.h"
#include "NiagaraCullProxyComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNiagaraCullProxyComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraCulledComponentInfo> Instances;
    
    UNiagaraCullProxyComponent(const FObjectInitializer& ObjectInitializer);

};

