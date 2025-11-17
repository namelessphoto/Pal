#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStateMachine.generated.h"

class UPalStateMachineStateBase;

UCLASS(BlueprintType)
class PAL_API UPalStateMachine : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<UClass*, UPalStateMachineStateBase*> StateMap;
    
    UPROPERTY(Transient)
    UPalStateMachineStateBase* CurrentState;
    
public:
    UPalStateMachine();

    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Start(UClass* StartClass);
    
    UFUNCTION(BlueprintPure)
    UPalStateMachineStateBase* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(UClass* ToStateClass);
    
    UFUNCTION(BlueprintCallable)
    void AddState(UPalStateMachineStateBase* State);
    
};

