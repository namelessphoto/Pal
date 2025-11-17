#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataBase.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalDynamicPalEggItemDataBase.generated.h"

UCLASS()
class PAL_API UPalDynamicPalEggItemDataBase : public UPalDynamicItemDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName CharacterID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
public:
    UPalDynamicPalEggItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

