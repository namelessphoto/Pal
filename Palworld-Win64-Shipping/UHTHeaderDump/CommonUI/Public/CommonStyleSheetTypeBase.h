#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonStyleSheetTypeBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCommonStyleSheetTypeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsEnabled;
    
    UCommonStyleSheetTypeBase();

};

