#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalInvaderType.h"
#include "PalInvaderDatabaseRow.h"
#include "PalIncidentBroadcastParameter.generated.h"

class UPalBaseCampModel;

USTRUCT(BlueprintType)
struct FPalIncidentBroadcastParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EPalInvaderType InvaderType;
    
    UPROPERTY(BlueprintReadOnly)
    UPalBaseCampModel* TargetBaseCamp;
    
    UPROPERTY(BlueprintReadOnly)
    FPalInvaderDatabaseRow ChosenInvaderData;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid GroupGuid;
    
    PAL_API FPalIncidentBroadcastParameter();
};

