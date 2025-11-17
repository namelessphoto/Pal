#pragma once
#include "CoreMinimal.h"
#include "SequentialProcessSequenceBase.h"
#include "SequentialProcessSequenceBase_WaitOneProcess.generated.h"

class USequentialProcessHandle;

UCLASS(Abstract)
class USequentialProcessSequenceBase_WaitOneProcess : public USequentialProcessSequenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USequentialProcessHandle* SelfManagedProcessHandle;
    
public:
    USequentialProcessSequenceBase_WaitOneProcess();

};

