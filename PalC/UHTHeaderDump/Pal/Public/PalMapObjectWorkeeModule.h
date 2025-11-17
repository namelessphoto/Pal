#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectWorkeeModuleMulticastDelegateDelegate.h"
#include "PalMapObjectWorkeeModuleWorkDelegateDelegate.h"
#include "PalMapObjectWorkeeModule.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(BlueprintType)
class UPalMapObjectWorkeeModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectWorkeeModuleMulticastDelegate OnChangeCannotApproachDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TargetWork)
    UPalWorkBase* TargetWork;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSet<FGuid> CannotApproachWorkIdSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CannotApproachByWork)
    bool bCannotApproachByWork;
    
public:
    UPalMapObjectWorkeeModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_TargetWork();
    
    UFUNCTION()
    void OnRep_CannotApproachByWork();
    
public:
    UFUNCTION(BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintPure)
    bool CannotApproachByWork() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyWork(FPalMapObjectWorkeeModuleWorkDelegate Delegate);
    
};

