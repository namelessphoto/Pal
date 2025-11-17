#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalNoClimbVolumeInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalNoClimbVolumeInterface : public UInterface {
    GENERATED_BODY()
};

class IPalNoClimbVolumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisableClimb() const;
    
};

