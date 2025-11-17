#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWorldSecurityLawTriggerType.h"
#include "PalWorldSecurityCrimeInstance.generated.h"

UCLASS()
class PAL_API UPalWorldSecurityCrimeInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    FGuid InstanceId;
    
    UPROPERTY(VisibleInstanceOnly)
    FName CrimeId;
    
    UPROPERTY(VisibleInstanceOnly)
    FGuid TargetId;
    
    UPROPERTY(VisibleInstanceOnly)
    EPalWorldSecurityLawTriggerType TriggerType;
    
public:
    UPalWorldSecurityCrimeInstance();

};

