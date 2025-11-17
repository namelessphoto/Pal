#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalBodyTemperatureState.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalHeatSourceInfo.h"
#include "PalTemperatureInfo.h"
#include "PalBodyTemperatureComponent.generated.h"

class APalCharacter;
class UPalItemSlot;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBodyTemperatureComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTemperatureDelegate, int32, NextTemperature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeResistRankDelegate, int32, NextResistHeat, int32, NextResistCold);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBodyStateDelegate, EPalBodyTemperatureState, BodyState);
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeTemperatureDelegate OnChangeTemperatureDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeResistRankDelegate OnChangeResistRankDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBodyStateDelegate OnChangeBodyStateDelegate;
    
private:
    UPROPERTY()
    TMap<FName, FPalHeatSourceInfo> HeatSourceInfoMap;
    
    UPROPERTY()
    FName SelfKeyName;
    
    UPROPERTY(Transient)
    FTimerHandle SlipDamageTimer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TemperatureInfo)
    FPalTemperatureInfo TemperatureInfo;
    
    UPROPERTY(Transient)
    FPalTemperatureInfo TemperatureInfo_Pre_ForClient;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Enabled)
    bool bEnabled;
    
public:
    UPalBodyTemperatureComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHeatSource(FName UniqueName);
    
private:
    UFUNCTION()
    void OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION()
    void OnUpdateEquipment(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    
    UFUNCTION()
    void OnRep_TemperatureInfo();
    
    UFUNCTION()
    void OnRep_Enabled();
    
    UFUNCTION()
    void OnInitializedPlayer(APalCharacter* Character);
    
    UFUNCTION()
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION()
    void OnChangeHour();
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnChangeTemperature(int32 Next);
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnChangeResistRank(int32 Heat, int32 Cold);
    
    UFUNCTION(NetMulticast, Reliable)
    void CallOnChangeBodyState(EPalBodyTemperatureState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallAllDelegate();
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSource(FName UniqueName, int32 HeatLevel);
    
};

