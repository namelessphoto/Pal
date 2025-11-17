#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IndividualCharacterParameterDelegateDelegate.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterHandle.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class UPalIndividualCharacterHandle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateIndividualActorDelegate, UPalIndividualCharacterHandle*, Handle);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateIndividualActorDelegate OnUpdateIndividualActorDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID ID;
    
public:
    UPalIndividualCharacterHandle();

    UFUNCTION(BlueprintPure)
    APalCharacter* TryGetPhantomActor(int32 PhantomId) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterParameter* TryGetIndividualParameter() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* TryGetIndividualActor() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPhantomIDByActor(APalCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    FPalInstanceID GetIndividualID() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyIndividualParameter(FIndividualCharacterParameterDelegate Delegate);
    
};

