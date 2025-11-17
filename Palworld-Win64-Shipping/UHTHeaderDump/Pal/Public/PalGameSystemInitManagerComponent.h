#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModularGameplay -ObjectName=GameStateComponent -FallbackName=GameStateComponent
#include "PalGameSystemInitSequenceSet.h"
#include "PalGameSystemInitManagerComponent.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalGameSystemInitManagerComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bCanReferToWorldObject;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalGameSystemInitSequenceSet> InitSequences;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 CurrentSequenceIndex;
    
public:
    UPalGameSystemInitManagerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnChangeProcessState(UPalGameSystemInitProcessHandle* ChangedProcessHandle);
    
    UFUNCTION()
    void OnChangeProcessProgressRate(UPalGameSystemInitProcessHandle* ChangedProcessHandle);
    
};

