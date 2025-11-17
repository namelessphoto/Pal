#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWazaID.h"
#include "FloatContainer.h"
#include "PalActiveSkillSlot.generated.h"

class AActor;
class UPalActiveSkill;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class UPalActiveSkillSlot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AActor* SelfActor;
    
    UPROPERTY(Transient)
    TMap<int32, UPalActiveSkill*> SkillMap;
    
    UPROPERTY(Transient)
    bool IsEndInit;
    
    UPROPERTY(Transient)
    FFloatContainer CoolDownSpeedRateMap;
    
public:
    UPalActiveSkillSlot();

    UFUNCTION(BlueprintCallable)
    void UpdateCoolTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopCoolTime(int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void SetTransient(int32 SlotId, bool NewIsTransient);
    
    UFUNCTION(BlueprintCallable)
    void SetSkill(int32 SlotId, EPalWazaID WazaType);
    
    UFUNCTION(BlueprintCallable)
    void SetCoolTimeRate(FName Key, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void RestartCoolTime_ByWazaID(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    void RestartCoolTime(int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSkill(int32 SlotId);
    
private:
    UFUNCTION()
    void OnChangeEquipWaza(UPalIndividualCharacterParameter* IndividualParameter);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidSkill(int32 SlotId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransient(int32 SlotId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNearMaxRange_AndRayCheck(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNearMaxRange(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFarMinRange(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoolTimeFinish(int32 SlotId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionSatisfy(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable)
    void InitObject(AActor* ActorSelf);
    
    UFUNCTION(BlueprintPure)
    EPalWazaID GetWazaType(int32 SlotId) const;
    
    UFUNCTION(BlueprintPure)
    TMap<int32, UPalActiveSkill*> GetSkillMap() const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetEnableSlotIDs() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoolTimeRate(int32 SlotId) const;
    
    UFUNCTION(BlueprintPure)
    float GetCoolTime(int32 SlotId) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindSlotIndexByWazaID(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    int32 FindSlotIDForWildPal();
    
    UFUNCTION(BlueprintPure)
    int32 FindMostEffectiveSlotID(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindFarthestSlotID_IgnoreSlotID(int32 IgnoreID);
    
    UFUNCTION(BlueprintPure)
    int32 ChoiceEnableSlotIDByRandom() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUse(int32 SlotId, AActor* TargetActor) const;
    
};

