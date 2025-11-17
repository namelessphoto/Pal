#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGroupGuildBase.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupIndependentGuild.generated.h"

UCLASS()
class UPalGroupIndependentGuild : public UPalGroupGuildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalGuildPlayerInfo PlayerInfo;
    
public:
    UPalGroupIndependentGuild();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

