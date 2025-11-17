#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSpriteRendererInfo.generated.h"

class UNiagaraSpriteRendererProperties;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UNiagaraSpriteRendererProperties* SpriteRenderer;
    
public:
    UNiagaraDataInterfaceSpriteRendererInfo();

};

