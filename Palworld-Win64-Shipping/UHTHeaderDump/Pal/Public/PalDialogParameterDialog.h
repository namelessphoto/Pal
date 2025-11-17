#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "EPalDialogType.h"
#include "PalDialogParameterBase.h"
#include "PalDialogParameterDialog.generated.h"

UCLASS()
class UPalDialogParameterDialog : public UPalDialogParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDefaultNegative;
    
    UPalDialogParameterDialog();

    UFUNCTION(BlueprintCallable)
    void SetParameters(const FText InMessage, const EPalDialogType InDialogType, const bool bInNegativeDefault, const TEnumAsByte<ETextJustify> OverrideJustify);
    
};

