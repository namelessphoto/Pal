#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalWorldSecurityLawTrigger.h"
#include "PalWorldSecurityLawTrigger_AreaInvasion.generated.h"

class AActor;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityLawTrigger_AreaInvasion : public UPalWorldSecurityLawTrigger {
    GENERATED_BODY()
public:
    UPalWorldSecurityLawTrigger_AreaInvasion();

protected:
    UFUNCTION()
    void OnNotifiedEventEnd(AActor* InvasionActor, const FGuid& AreaInstanceId);
    
    UFUNCTION()
    void OnNotifiedEvent(AActor* InvasionActor, const FGuid& AreaInstanceId);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Condition(AActor* InvasionActor, UPalIndividualCharacterHandle*& CriminalHandle);
    
};

