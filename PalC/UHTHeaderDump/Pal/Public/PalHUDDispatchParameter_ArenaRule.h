#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalArenaRulePanelType.h"
#include "PalArenaMatchingPlayerInfo.h"
#include "PalArenaRule.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ArenaRule.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_ArenaRule : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalArenaRule ArenaRule;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ArenaRoomId;
    
    UPROPERTY(BlueprintReadOnly)
    EPalArenaRulePanelType PanelType;
    
    UPROPERTY(BlueprintReadOnly)
    FPalArenaMatchingPlayerInfo MatchingPlayerInfo;
    
    UPalHUDDispatchParameter_ArenaRule();

};

