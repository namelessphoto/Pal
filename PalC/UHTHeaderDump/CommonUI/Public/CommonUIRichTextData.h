#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonUIRichTextData.generated.h"

class UDataTable;

UCLASS(Abstract)
class COMMONUI_API UCommonUIRichTextData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* InlineIconSet;
    
public:
    UCommonUIRichTextData();

};

