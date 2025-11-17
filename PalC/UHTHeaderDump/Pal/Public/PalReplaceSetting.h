#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalReplaceSetting.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UPalReplaceSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FName> CharacterIDReplacer;
    
    UPalReplaceSetting();

};

