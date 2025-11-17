#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "NiagaraUIComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIAGARAUIRENDERER_API UNiagaraUIComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UNiagaraUIComponent(const FObjectInitializer& ObjectInitializer);

};

