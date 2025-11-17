#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDialogParameterDialog.h"
#include "PalDialogParameter_RequestMapObjectDismantle.generated.h"

UCLASS()
class UPalDialogParameter_RequestMapObjectDismantle : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FGuid MapObjectInstanceId;
    
    UPalDialogParameter_RequestMapObjectDismantle();

};

