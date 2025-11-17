#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "CommonUIInputData.generated.h"

UCLASS(Abstract)
class COMMONINPUT_API UCommonUIInputData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle DefaultClickAction;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle DefaultBackAction;
    
    UCommonUIInputData();

};

