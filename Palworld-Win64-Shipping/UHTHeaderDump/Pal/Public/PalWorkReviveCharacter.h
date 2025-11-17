#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalWorkBase.h"
#include "PalWorkReviveCharacter.generated.h"

UCLASS()
class UPalWorkReviveCharacter : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID TargetIndividualId;
    
public:
    UPalWorkReviveCharacter();

};

