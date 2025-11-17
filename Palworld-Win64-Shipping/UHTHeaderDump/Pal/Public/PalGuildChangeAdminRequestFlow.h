#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGuildRequestFlowBase.h"
#include "PalGuildChangeAdminRequestFlow.generated.h"

UCLASS()
class PAL_API UPalGuildChangeAdminRequestFlow : public UPalGuildRequestFlowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid TargetGuildId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid NextAdminPlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ApplicantPlayerUId;
    
public:
    UPalGuildChangeAdminRequestFlow();

};

