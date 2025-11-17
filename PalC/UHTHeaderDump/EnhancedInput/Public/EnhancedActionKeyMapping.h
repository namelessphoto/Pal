#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "PlayerMappableKeyOptions.h"
#include "EnhancedActionKeyMapping.generated.h"

class UInputAction;
class UInputModifier;
class UInputTrigger;

USTRUCT(BlueprintType)
struct FEnhancedActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerMappableKeyOptions PlayerMappableOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UInputTrigger*> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UInputModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInputAction* action;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsPlayerMappable: 1;
    
    UPROPERTY(Transient)
    uint8 bShouldBeIgnored: 1;
    
    ENHANCEDINPUT_API FEnhancedActionKeyMapping();
};

