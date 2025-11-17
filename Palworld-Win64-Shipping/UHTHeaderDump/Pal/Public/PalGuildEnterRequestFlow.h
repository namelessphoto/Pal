#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGuildRequestFlowBase.h"
#include "PalGuildEnterRequestFlow.generated.h"

UCLASS()
class PAL_API UPalGuildEnterRequestFlow : public UPalGuildRequestFlowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ApplicantPlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid RespondentPlayerUId;
    
public:
    UPalGuildEnterRequestFlow();

};

