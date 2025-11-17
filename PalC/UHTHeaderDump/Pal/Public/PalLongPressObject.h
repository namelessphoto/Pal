#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalLongPressObject.generated.h"

UCLASS()
class UPalLongPressObject : public UObject {
    GENERATED_BODY()
public:
    UPalLongPressObject();

private:
    UFUNCTION()
    void ReleaseCallback();
    
    UFUNCTION()
    void PressCallback();
    
    UFUNCTION()
    void LongPressCallback();
    
};

