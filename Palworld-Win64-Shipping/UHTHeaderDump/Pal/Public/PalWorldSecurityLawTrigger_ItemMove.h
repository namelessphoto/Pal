#pragma once
#include "CoreMinimal.h"
#include "PalItemOperationInfo_Move.h"
#include "PalWorldSecurityLawTrigger.h"
#include "PalWorldSecurityLawTrigger_ItemMove.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityLawTrigger_ItemMove : public UPalWorldSecurityLawTrigger {
    GENERATED_BODY()
public:
    UPalWorldSecurityLawTrigger_ItemMove();

protected:
    UFUNCTION()
    void OnNotifiedEvent(const FPalItemOperationInfo_Move& EventInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Condition(const FPalItemOperationInfo_Move& EventInfo);
    
};

