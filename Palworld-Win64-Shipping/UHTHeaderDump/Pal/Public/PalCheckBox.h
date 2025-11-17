#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CheckBox -FallbackName=CheckBox
#include "PalCheckBox.generated.h"

UCLASS()
class PAL_API UPalCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
    UPalCheckBox();

    UFUNCTION(BlueprintCallable)
    void ToggleCheck();
    
};

