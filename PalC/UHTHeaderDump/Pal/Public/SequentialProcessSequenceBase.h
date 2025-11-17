#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequentialProcessSequenceBase.generated.h"

class USequentialProcessHandle;

UCLASS(Abstract)
class USequentialProcessSequenceBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<USequentialProcessHandle*> ProcessHandles;
    
public:
    USequentialProcessSequenceBase();

};

