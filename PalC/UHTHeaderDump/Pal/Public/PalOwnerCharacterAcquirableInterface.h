#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalOwnerCharacterAcquirableInterface.generated.h"

class APalCharacter;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalOwnerCharacterAcquirableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalOwnerCharacterAcquirableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual APalCharacter* GetOwnerCharacter() PURE_VIRTUAL(GetOwnerCharacter, return NULL;);
    
};

