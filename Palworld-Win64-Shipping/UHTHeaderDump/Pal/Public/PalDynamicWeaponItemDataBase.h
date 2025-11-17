#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataBase.h"
#include "PalObjectDurabilityInterface.h"
#include "PalDynamicWeaponItemDataBase.generated.h"

UCLASS()
class PAL_API UPalDynamicWeaponItemDataBase : public UPalDynamicItemDataBase, public IPalObjectDurabilityInterface {
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
    int32 RemainingBullets;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsEmptyBulletInventory;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FName> PassiveSkillList;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ForceUpdateBulletsCounter)
    uint8 ForceUpdateBulletsCounter;
    
public:
    UPalDynamicWeaponItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    int32 UseBullets(int32 UseNum);
    
    UFUNCTION(BlueprintCallable)
    bool UseBullet();
    
    UFUNCTION(BlueprintCallable)
    void SetReloadStartRemainingBullets_Local(int32 bulletsNum);
    
private:
    UFUNCTION()
    void SetDurabilityInternal(float NewDurability);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBulletsNum(int32 bulletsNum);
    
    UFUNCTION(BlueprintCallable)
    void ResetReloadStartRemainingBullets_Local();
    
protected:
    UFUNCTION()
    void OnRep_ForceUpdateBulletsCounter();
    
    UFUNCTION()
    void OnRep_Durability();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEmptyMagazine() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmptyBulletInventory() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingBulletsNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReloadStartRemainingBullets_Local() const;
    
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

