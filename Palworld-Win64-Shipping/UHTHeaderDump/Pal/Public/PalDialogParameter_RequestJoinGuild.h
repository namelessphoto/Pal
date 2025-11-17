#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDialogParameterDialog.h"
#include "PalInstanceID.h"
#include "PalDialogParameter_RequestJoinGuild.generated.h"

UCLASS()
class UPalDialogParameter_RequestJoinGuild : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FGuid TargetPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalInstanceID TargetPlayerInstanceId;
    
    UPalDialogParameter_RequestJoinGuild();

};

