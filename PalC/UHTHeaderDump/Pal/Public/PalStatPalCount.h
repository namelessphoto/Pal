#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStatPalCount.generated.h"

class UFont;

UCLASS()
class UPalStatPalCount : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UFont* FontObject;
    
public:
    UPalStatPalCount();

};

