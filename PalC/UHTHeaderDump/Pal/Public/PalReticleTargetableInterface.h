#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalReticleTargetableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalReticleTargetableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalReticleTargetableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsShowOutlineInReticleTargetting() const;
    
};

