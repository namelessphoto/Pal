#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalBuildProcessState.h"
#include "PalBuildProcess.generated.h"

class UPalBuildProcess;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(BlueprintType)
class UPalBuildProcess : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateStateDelegate, UPalBuildProcess*, BuildProcess);
    
    UPROPERTY()
    FUpdateStateDelegate OnUpdateStateDelegate;
    
    UPROPERTY()
    FUpdateStateDelegate OnFinishBuildDelegate;
    
private:
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_StateChanged)
    EPalBuildProcessState State;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_BuildWork)
    UPalWorkProgress* BuildWork;
    
public:
    UPalBuildProcess();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_StateChanged();
    
    UFUNCTION()
    void OnRep_BuildWork();
    
private:
    UFUNCTION()
    void OnReflectFinishBuildWork(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
};

