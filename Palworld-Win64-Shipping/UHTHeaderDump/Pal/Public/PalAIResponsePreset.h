#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalAIResponseType.h"
#include "PalAIResponsePreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class PAL_API UPalAIResponsePreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Discover_Player;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Discover_Greater;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Discover_Equal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Discover_Smaller;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Damaged_Player;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Damaged_Greater;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Damaged_Equal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAIResponseType Damaged_Smaller;
    
    UPalAIResponsePreset();

};

