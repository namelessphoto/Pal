#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EPalAttackTargetsType.h"
#include "PalAttackTargetsInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAttackTargetsInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAttackTargetsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsHitTarget(UPARAM(Ref) TArray<EPalAttackTargetsType>& TargetTypeList);
    
};

