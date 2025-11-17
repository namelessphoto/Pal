#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkSelectedChoiceCommand.h"
#include "PalNPCTalkSelectedChoiceCommandData.generated.h"

class UDataTable;

USTRUCT()
struct FPalNPCTalkSelectedChoiceCommandData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalNPCTalkSelectedChoiceCommand selectedChoiceCommand;
    
    UPROPERTY(EditDefaultsOnly)
    FName SeqenceName;
    
    UPROPERTY(EditDefaultsOnly)
    FName CustomFuncName;
    
    UPROPERTY(EditDefaultsOnly)
    bool isCloseWhenCalledCustomFunc;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CustomFuncParam;
    
    PAL_API FPalNPCTalkSelectedChoiceCommandData();
};

