#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIAction_LeaveBase.generated.h"

class AActor;
class APalCharacter;
class UPalCharacterMovementComponent;

UCLASS(Abstract, EditInlineNew)
class PAL_API UPalAIAction_LeaveBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalCharacter* SelfActor;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UPalCharacterMovementComponent* Movement;
    
public:
    UPalAIAction_LeaveBase();

    UFUNCTION(BlueprintCallable)
    void InitializeObject(AActor* CombatTarget, APalCharacter* SelfCharactor);
    
};

