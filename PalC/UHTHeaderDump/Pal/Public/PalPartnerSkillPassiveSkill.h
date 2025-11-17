#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassivePartnerSkillIdAndParameters.h"
#include "PalPassivePartnerSkillStatus.h"
#include "PalPartnerSkillPassiveSkill.generated.h"

class AActor;
class ACharacter;
class APalCharacter;
class APalPlayerCharacter;
class APalPlayerController;
class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalPartnerSkillPassiveSkill : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCachedPassiveSkillListDelegate, const FString&, InOperation, const FName&, InSkillName);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsRestricted, AActor*, Trainer);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIsRestricted IsRestrictedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCachedPassiveSkillListDelegate OnCachedPassiveSkillListDelegate;
    
    UPROPERTY()
    bool isReserving;
    
private:
    UPROPERTY(VisibleAnywhere)
    bool bIsRestricted;
    
    UPROPERTY()
    bool bRequireWorkerWorkingPassiveSkill;
    
    UPROPERTY()
    bool bIsWorking;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPalPassivePartnerSkillIdAndParameters> PassiveSkills;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FPalDataTableRowName_PassiveSkillData, FPalPassivePartnerSkillStatus> SkillStatus;
    
    UPROPERTY()
    int32 CurrentRank;
    
public:
    UPalPartnerSkillPassiveSkill();

private:
    UFUNCTION()
    void OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter);
    
    UFUNCTION()
    void OnUpdateOtomoHolder(APalCharacter* Character);
    
public:
    UFUNCTION()
    void OnUpdateInventoryContainer();
    
    UFUNCTION()
    void OnUpdateCurrentGround(TEnumAsByte<EPhysicalSurface> GroundType);
    
private:
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
    
private:
    UFUNCTION()
    void OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomo();
    
private:
    UFUNCTION()
    void OnChangeDisablePassiveSkill(bool isDisable, bool IsAllReset);
    
public:
    UFUNCTION()
    void OnChangeDayTime();
    
private:
    UFUNCTION()
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomo();
    
private:
    UFUNCTION()
    void ObserveWorking();
    
    UFUNCTION()
    bool IsRestricted() const;
    
public:
    UFUNCTION()
    void Initialize(const TArray<FPalPassivePartnerSkillIdAndParameters>& _PassiveSkills);
    
private:
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
    
private:
    UFUNCTION()
    APalCharacter* GetOwner() const;
    
    UFUNCTION()
    int32 GetOtomoRank() const;
    
};

