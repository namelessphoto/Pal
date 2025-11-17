#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterDropCharacter.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterDropCharacter : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ByPlayerUId;
    
    UPROPERTY()
    bool bPickableAnyone;
    
    UPalMapObjectModelInitializeExtraParameterDropCharacter();

};

