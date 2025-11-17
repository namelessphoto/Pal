#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGuildRequestFlowBase.h"
#include "PalGuildExitRequestFlow.generated.h"

UCLASS()
class PAL_API UPalGuildExitRequestFlow : public UPalGuildRequestFlowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid TargetGuildId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid TargetPlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ApplicantPlayerUId;
    
public:
    UPalGuildExitRequestFlow();

};

