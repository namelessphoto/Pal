#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGameSystemInitProcessHandle.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS()
class UPalGameSystemInitProcessHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UPalGameSystemInitProcessHandle*> ChildProcessHandles;
    
public:
    UPalGameSystemInitProcessHandle();

private:
    UFUNCTION()
    void OnChangeChildProcessHandleState(UPalGameSystemInitProcessHandle* ChangedProcessHandle);
    
};

