#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterReplace.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterReplace : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ReplaceTargetInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterReplace();

};

