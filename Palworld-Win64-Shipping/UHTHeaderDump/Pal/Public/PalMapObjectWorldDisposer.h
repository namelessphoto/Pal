#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectWorldDisposer.generated.h"

class UPalMapObjectWorldDisposerBase;

UCLASS()
class PAL_API UPalMapObjectWorldDisposer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalMapObjectWorldDisposerBase*> WorldDisposers;
    
public:
    UPalMapObjectWorldDisposer();

};

