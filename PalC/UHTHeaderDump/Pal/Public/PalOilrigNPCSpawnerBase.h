#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigNPCSpawnerBase.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalSquad;

UCLASS()
class PAL_API APalOilrigNPCSpawnerBase : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(Transient)
    UPalSquad* Squad;
    
public:
    APalOilrigNPCSpawnerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnResetOilrig_BP();
    
private:
    UFUNCTION()
    void OnChangeOneNPCCombatMode(APalCharacter* Character, bool IsCombat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyWipedOut();
    
    UFUNCTION(BlueprintPure)
    bool IsWipedOut();
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToGroup(UPalIndividualCharacterHandle* Handle);
    

    // Fix for true pure virtual functions not being implemented
};

