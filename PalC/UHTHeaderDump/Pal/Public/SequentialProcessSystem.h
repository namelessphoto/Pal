#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequentialProcessSequenceSet.h"
#include "SequentialProcessSystem.generated.h"

class USequentialProcessHandle;

UCLASS()
class PAL_API USequentialProcessSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FSequentialProcessSequenceSet> SequenceSets;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 CurrentSequenceIndex;
    
public:
    USequentialProcessSystem();

private:
    UFUNCTION()
    void OnChangeProcessState(USequentialProcessHandle* ChangedProcessHandle);
    
    UFUNCTION()
    void OnChangeProcessProgressRate(USequentialProcessHandle* ChangedProcessHandle);
    
};

