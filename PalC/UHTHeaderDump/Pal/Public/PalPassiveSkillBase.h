#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassiveSkills.h"
#include "PalPassiveSkillstatus.h"
#include "PalPassiveSkillBase.generated.h"

class AActor;
class ACharacter;
class APalCharacter;
class APalPlayerCharacter;
class APalPlayerController;
class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalItemContainer;

UCLASS(BlueprintType)
class PAL_API UPalPassiveSkillBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsRestricted, AActor*, Trainer);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIsRestricted IsRestrictedDelegate;
    
    UPROPERTY()
    bool isReserving;
    
protected:
    UPROPERTY(VisibleAnywhere)
    bool bIsRestricted;
    
    UPROPERTY()
    bool bRequireWorkerWorkingPassiveSkill;
    
    UPROPERTY()
    bool bIsWorking;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPalPassiveSkills> PassiveSkills;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FPalDataTableRowName_PassiveSkillData, FPalPassiveSkillstatus> SkillStatus;
    
    UPROPERTY()
    int32 CurrentRank;
    
public:
    UPalPassiveSkillBase();

protected:
    UFUNCTION()
    void OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter);
    
    UFUNCTION()
    void OnUpdateOtomoHolder(APalCharacter* Character);
    
    UFUNCTION()
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnUpdateBaseCampId(const FGuid& BaseCampId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRideInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRideActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnReserveInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnReserveActivated();
    
protected:
    UFUNCTION()
    void OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomo();
    
protected:
    UFUNCTION()
    void OnChangeDisablePassiveSkill(bool isDisable, bool IsAllReset);
    
    UFUNCTION()
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomo();
    
protected:
    UFUNCTION()
    void ObserveWorking();
    
    UFUNCTION()
    bool IsRestricted() const;
    
public:
    UFUNCTION()
    void Initialize(const TArray<FPalPassiveSkills>& _PassiveSkills);
    
protected:
    UFUNCTION()
    void InactivateWorkingSkill();
    
    UFUNCTION()
    APalPlayerController* GetTrainerController() const;
    
    UFUNCTION()
    APalPlayerCharacter* GetTrainerActor() const;
    
    UFUNCTION()
    ACharacter* GetTrainer() const;
    
public:
    UFUNCTION()
    TArray<FName> GetPassiveSkillList() const;
    
protected:
    UFUNCTION()
    APalCharacter* GetOwner() const;
    
    UFUNCTION()
    int32 GetOtomoRank() const;
    
};

