#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCharacter.h"
#include "PalCharacterOnCompleteInitializeParameterWrapper.generated.h"

class APalCharacter;

UCLASS(Deprecated, NotPlaceable)
class UDEPRECATED_PalCharacterOnCompleteInitializeParameterWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    APalCharacter::FOnCompleteInitializeParameter OnCompleteInitializeParameterDelegate;
    
    UDEPRECATED_PalCharacterOnCompleteInitializeParameterWrapper();

    UFUNCTION()
    void Broadcast(APalCharacter* Character) const;
    
};

