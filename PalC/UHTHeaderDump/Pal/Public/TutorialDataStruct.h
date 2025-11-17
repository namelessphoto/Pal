#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalTutorialTriggerConditionType.h"
#include "EPalTutorialTriggerType.h"
#include "TutorialDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FTutorialDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MsgID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalTutorialTriggerType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool MultiTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalTutorialTriggerConditionType ConditionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> ConditionObjectIds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ConditionCategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ConditionValue;
    
    PAL_API FTutorialDataStruct();
};

