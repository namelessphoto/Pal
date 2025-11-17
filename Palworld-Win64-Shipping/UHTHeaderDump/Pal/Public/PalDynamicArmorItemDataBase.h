#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataBase.h"
#include "PalObjectDurabilityInterface.h"
#include "PalDynamicArmorItemDataBase.generated.h"

UCLASS()
class PAL_API UPalDynamicArmorItemDataBase : public UPalDynamicItemDataBase, public IPalObjectDurabilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_Durability)
    float Durability;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    float MaxDurability;
    
    UPROPERTY(VisibleInstanceOnly)
    float OldDurability;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FName> PassiveSkillList;
    
public:
    UPalDynamicArmorItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void SetDurabilityInternal(float NewDurability);
    
    UFUNCTION()
    void OnRep_Durability();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FName> GetPassiveSkillList() const;
    
    UFUNCTION()
    float GetMaxDurability() const;
    
    UFUNCTION()
    float GetDurability() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllPassive();
    
    UFUNCTION(BlueprintCallable)
    bool ChangePassiveSkill(int32 passiveIndex, FName SkillName);
    
    UFUNCTION(BlueprintCallable)
    bool AddPassiveSkill(FName SkillName);
    

    // Fix for true pure virtual functions not being implemented
};

