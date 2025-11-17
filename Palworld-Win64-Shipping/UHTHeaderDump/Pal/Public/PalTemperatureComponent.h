#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "PalHeatSourceInfo.h"
#include "PalTemperatureComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTemperatureComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTemperatureDelegate, int32, NextTemperature);
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeTemperatureDelegate OnChangeTemperatureDelegate;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentTemperature)
    int32 CurrentTemperature;
    
    UPROPERTY()
    FName SelfKeyName;
    
public:
    UPalTemperatureComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveHeatSource(FName UniqueName);
    
private:
    UFUNCTION()
    void OnRep_CurrentTemperature();
    
    UFUNCTION()
    void OnChangeHour();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetCurrentTemperature();
    
    UFUNCTION(BlueprintCallable)
    void CallAllDelegate();
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSource(FName UniqueName, int32 HeatLevel);
    
};

