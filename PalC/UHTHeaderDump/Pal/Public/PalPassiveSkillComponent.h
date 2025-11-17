#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalCurveBall.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalStatusID.h"
#include "FlagContainer.h"
#include "PalDamageInfo.h"
#include "PalPassiveSkillEffectInfos.h"
#include "PalSpecialAttackRateInfo.h"
#include "PalPassiveSkillComponent.generated.h"

class APalCharacter;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPassiveSkillComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSkillEffect, EPalPassiveSkillEffectType, EffectType, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndSkillEffect, EPalPassiveSkillEffectType, EffectType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSkillEffectValue, EPalPassiveSkillEffectType, EffectType, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeDisablePassiveSkill, bool, isDisable, bool, IsAllReset);
    
    UPROPERTY(BlueprintAssignable)
    FOnStartSkillEffect OnStartSkillEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSkillEffectValue OnChangeSkillEffectValueDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndSkillEffect OnEndSkillEffectDelegate;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_SkillInfos)
    TArray<FPalPassiveSkillEffectInfos> SkillInfos;
    
    UPROPERTY(Transient)
    TArray<FPalPassiveSkillEffectInfos> SkillInfosMirror;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer PassiveDisableFlag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EPalPassiveSkillEffectType, EPalStatusID> SkillStatusMap;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeDisablePassiveSkill OnChangeDisablePassiveSkill;
    
private:
    UPROPERTY()
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypes;
    
public:
    UPalPassiveSkillComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePassiveSkill(FName flagName, bool isDisable);
    
    UFUNCTION()
    void OverrideDamageInfoBySkill(FPalDamageInfo& inoutDamageInfo);
    
private:
    UFUNCTION()
    void OnUpdateCharacterRank(int32 NowRank, int32 OldRank);
    
    UFUNCTION()
    void OnStartSkillEffect(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION()
    void OnRep_SkillInfos();
    
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION()
    void OnEndSkillEffect(EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION()
    void OnChangeSkillEffectValue(EPalPassiveSkillEffectType EffectType, float Value);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDisablePassiveSkill() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSkill(EPalPassiveSkillEffectType Type, bool containEquip);
    
    UFUNCTION(BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, bool containEquip);
    
    UFUNCTION(BlueprintPure)
    EPalCurveBall GetCurveBallTypePassiveEffectByPlayerEquip();
    
    UFUNCTION()
    void AddSpecialAttackRateInfo(TArray<FPalSpecialAttackRateInfo>& SpecialAttackRateInfos);
    
};

