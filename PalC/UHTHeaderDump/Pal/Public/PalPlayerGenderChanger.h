#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalPlayerBodyShape.h"
#include "OverridePlayerGenderParams.h"
#include "PlayerGenderParams.h"
#include "PalPlayerGenderChanger.generated.h"

UCLASS()
class PAL_API UPalPlayerGenderChanger : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPlayerGenderParams MaleCharacterParams;
    
    UPROPERTY(Transient)
    FPlayerGenderParams FemaleCharacterParams;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalPlayerBodyShape, FOverridePlayerGenderParams> OverrideMap;
    
    UPROPERTY(Transient)
    bool bIsFemale;
    
public:
    UPalPlayerGenderChanger();

};

