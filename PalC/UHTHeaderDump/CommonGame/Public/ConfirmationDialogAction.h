#pragma once
#include "CoreMinimal.h"
#include "ECommonMessagingResult.h"
#include "ConfirmationDialogAction.generated.h"

USTRUCT(BlueprintType)
struct FConfirmationDialogAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommonMessagingResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText OptionalDisplayText;
    
    COMMONGAME_API FConfirmationDialogAction();
};

