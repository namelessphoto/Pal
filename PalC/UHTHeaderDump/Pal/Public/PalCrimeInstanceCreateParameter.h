#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalWorldSecurityLawTriggerType.h"
#include "PalCrimeInstanceCreateParameter.generated.h"

USTRUCT()
struct FPalCrimeInstanceCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CrimeId;
    
    UPROPERTY()
    FGuid TargetId;
    
    UPROPERTY()
    EPalWorldSecurityLawTriggerType TriggerType;
    
    PAL_API FPalCrimeInstanceCreateParameter();
};

