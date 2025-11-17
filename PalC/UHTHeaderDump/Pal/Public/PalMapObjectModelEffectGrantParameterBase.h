#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectModelEffectGrantParameterBase.generated.h"

class UPalMapObjectModel;

UCLASS(Abstract)
class PAL_API UPalMapObjectModelEffectGrantParameterBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalMapObjectModel* OwnerModel;
    
    UPalMapObjectModelEffectGrantParameterBase();

};

