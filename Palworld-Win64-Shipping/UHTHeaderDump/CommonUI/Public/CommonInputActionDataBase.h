#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "CommonInputTypeInfo.h"
#include "CommonInputActionDataBase.generated.h"

USTRUCT(BlueprintType)
struct COMMONUI_API FCommonInputActionDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HoldDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NavBarPriority;
    
protected:
    UPROPERTY(EditAnywhere)
    FCommonInputTypeInfo KeyboardInputTypeInfo;
    
    UPROPERTY(EditAnywhere)
    FCommonInputTypeInfo DefaultGamepadInputTypeInfo;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FCommonInputTypeInfo> GamepadInputOverrides;
    
    UPROPERTY(EditAnywhere)
    FCommonInputTypeInfo TouchInputTypeInfo;
    
public:
    FCommonInputActionDataBase();
};

