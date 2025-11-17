#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfacePhysicsAsset.generated.h"

class AActor;
class UPhysicsAsset;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* DefaultSource;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> SoftSourceActor;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding MeshUserParameter;
    
    UNiagaraDataInterfacePhysicsAsset();

};

