#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_PalBox.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_PalBox : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid OwnerMapObjectInstanceId;
    
    UPalHUDDispatchParameter_PalBox();

};

