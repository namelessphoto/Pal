#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActivatableWidget -FallbackName=CommonActivatableWidget
#include "CommonGameDialog.generated.h"

UCLASS(Abstract, EditInlineNew)
class COMMONGAME_API UCommonGameDialog : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UCommonGameDialog();

};

