#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAIControllerBaseCampStatus.generated.h"

class UPalBaseCampModel;

UCLASS(BlueprintType)
class UPalAIControllerBaseCampStatus : public UObject {
    GENERATED_BODY()
public:
    UPalAIControllerBaseCampStatus();

    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCamp() const;
    
};

