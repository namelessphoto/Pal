#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_BeThrown.generated.h"

class UAnimMontage;
class UNiagaraComponent;

UCLASS()
class UPalAction_BeThrown : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UAnimMontage* PlayingMontage;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient)
    UNiagaraComponent* NiagaraComponent;
    
public:
    UPalAction_BeThrown();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void PlayThrownMontage();
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayThrownFX();
    
};

