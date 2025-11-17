#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalAIActionBaseCampInUsingAmusement.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalAIActionBaseCampInUsingAmusement : public UPalAIActionBaseCampBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampInUsingAmusement();

protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetUsingTime() const;
    

    // Fix for true pure virtual functions not being implemented
};

