#pragma once
#include "CoreMinimal.h"
#include "PalNPCTalkSystemCustomFunctionParameters.generated.h"

class IPalNPCTalkSystemCustomFunctionInterface;
class UPalNPCTalkSystemCustomFunctionInterface;
class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCTalkSystemCustomFunctionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TScriptInterface<IPalNPCTalkSystemCustomFunctionInterface> Interface;
    
    UPROPERTY(BlueprintReadOnly)
    UDataTable* FuncParameter;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TalkDataIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FName TalkDataSeqenceName;
    
    PAL_API FPalNPCTalkSystemCustomFunctionParameters();
};

