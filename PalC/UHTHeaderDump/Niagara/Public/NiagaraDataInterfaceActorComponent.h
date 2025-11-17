#pragma once
#include "CoreMinimal.h"
#include "ENDIActorComponentSourceMode.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceActorComponent.generated.h"

class AActor;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRequireCurrentFrameData;
    
    UPROPERTY(EditAnywhere)
    ENDIActorComponentSourceMode SourceMode;
    
    UPROPERTY(EditAnywhere)
    int32 LocalPlayerIndex;
    
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<AActor> SourceActor;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding ActorOrComponentParameter;
    
    UNiagaraDataInterfaceActorComponent();

};

