#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCharacter.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalFunnelCharacter.generated.h"

class APalPlayerCharacter;
class UPalAIActionFunnelSkillBase;
class UPalFunnelSkillModule;

UCLASS()
class PAL_API APalFunnelCharacter : public APalCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalAIActionFunnelSkillBase> FunnelSkillAIActionClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalFunnelSkillModule> FunnelSkillModuleClass;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OwnerCharacterId)
    FPalInstanceID OwnerCharacterId;
    
public:
    APalFunnelCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void SetOwnerCharacterId(const FPalInstanceID NewOwnerCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocationNearTrainer();
    
private:
    UFUNCTION()
    void OnTrainerMoveToRespawnLocation(APalPlayerCharacter* Player, FVector Location);
    
    UFUNCTION()
    void OnTrainerDead(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnSpawned();
    
private:
    UFUNCTION()
    void OnRep_OwnerCharacterId();
    
    UFUNCTION()
    void OnOwnerDead(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInactive(bool NoEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActive(bool NoEffect);
    
private:
    UFUNCTION()
    void InactivateSelf();
    
public:
    UFUNCTION(BlueprintPure)
    APalCharacter* GetTrainer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetOwnerPal() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterID() const;
    
private:
    UFUNCTION()
    void ActivateSelf();
    
};

