#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequentialProcessHandle.generated.h"

class USequentialProcessHandle;

UCLASS()
class USequentialProcessHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<USequentialProcessHandle*> ChildProcessHandles;
    
public:
    USequentialProcessHandle();

private:
    UFUNCTION()
    void OnChangeChildProcessHandleState(USequentialProcessHandle* ChangedProcessHandle);
    
};

