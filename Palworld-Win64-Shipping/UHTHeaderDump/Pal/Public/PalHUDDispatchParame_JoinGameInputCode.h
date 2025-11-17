#pragma once
#include "CoreMinimal.h"
#include "EPalUIJoinGameInputCodeType.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIServerDisplayData.h"
#include "PalHUDDispatchParame_JoinGameInputCode.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParame_JoinGameInputCode : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalUIJoinGameInputCodeType InputCodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalUIServerDisplayData TargetServerDisplayInfo;
    
    UPalHUDDispatchParame_JoinGameInputCode();

};

