#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EInputActionValueType.h"
#include "InputAction.generated.h"

class UInputModifier;
class UInputTrigger;

UCLASS(BlueprintType)
class ENHANCEDINPUT_API UInputAction : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ActionDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bConsumeInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTriggerWhenPaused;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReserveAllMappings;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    EInputActionValueType ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UInputTrigger*> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UInputModifier*> Modifiers;
    
    UInputAction();

};

