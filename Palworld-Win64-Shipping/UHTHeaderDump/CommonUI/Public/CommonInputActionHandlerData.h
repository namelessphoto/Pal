#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EInputActionState.h"
#include "CommonInputActionHandlerData.generated.h"

USTRUCT(BlueprintType)
struct COMMONUI_API FCommonInputActionHandlerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle InputActionRow;
    
private:
    UPROPERTY(EditAnywhere)
    EInputActionState State;
    
public:
    FCommonInputActionHandlerData();
};

