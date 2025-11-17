#pragma once
#include "CoreMinimal.h"
#include "PalCharacterMovementTickFunction.h"
#include "PalWorldSubsystem.h"
#include "PalCharacterMovementSubsystem.generated.h"

UCLASS()
class PAL_API UPalCharacterMovementSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FPalCharacterMovementTickFunction MovementTickFunction;
    
public:
    UPalCharacterMovementSubsystem();

};

