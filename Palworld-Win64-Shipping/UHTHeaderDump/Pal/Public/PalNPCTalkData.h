#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkCommand.h"
#include "PalNPCTalkSelectedChoiceCommandData.h"
#include "PalNPCTalkData.generated.h"

class UDataTable;

USTRUCT()
struct FPalNPCTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalNPCTalkCommand TalkCommand;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> MessageIDList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ChoiceMessageIDList;
    
    UPROPERTY(EditDefaultsOnly)
    FName TalkerNameID;
    
    UPROPERTY(EditDefaultsOnly)
    FName CustomFuncName;
    
    UPROPERTY(EditDefaultsOnly)
    bool isCloseWhenCalledCustomFunc;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CustomFuncParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalNPCTalkSelectedChoiceCommandData> SelectedChoiceCommandDataList;
    
    PAL_API FPalNPCTalkData();
};

