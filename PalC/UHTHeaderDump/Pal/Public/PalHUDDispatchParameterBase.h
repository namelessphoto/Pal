#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalHUDDispatchParameterBase.generated.h"

UCLASS()
class PAL_API UPalHUDDispatchParameterBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBeginDestroyDelegate OnClose;
    
    UPalHUDDispatchParameterBase();

};

