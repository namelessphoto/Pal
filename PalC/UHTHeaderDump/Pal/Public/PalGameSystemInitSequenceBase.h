#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGameSystemInitSequenceBase.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS(Abstract)
class UPalGameSystemInitSequenceBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UPalGameSystemInitProcessHandle*> ProcessHandles;
    
public:
    UPalGameSystemInitSequenceBase();

};

