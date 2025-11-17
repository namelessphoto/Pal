#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUObjectPropertyReaderRemap.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceUObjectPropertyReader.generated.h"

class AActor;
class UNiagaraComponent;

UCLASS(BlueprintType, EditInlineNew)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding UObjectParameterBinding;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraUObjectPropertyReaderRemap> PropertyRemap;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> SourceActor;
    
    UPROPERTY(EditAnywhere)
    UClass* SourceActorComponentClass;
    
    UNiagaraDataInterfaceUObjectPropertyReader();

    UFUNCTION(BlueprintCallable)
    static void SetUObjectReaderPropertyRemap(UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName);
    
};

