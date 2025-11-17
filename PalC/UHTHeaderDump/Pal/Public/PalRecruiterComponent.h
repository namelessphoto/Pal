#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalRecruiterComponent.generated.h"

class APalPlayerCharacter;
class UDataTable;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalRecruiterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPalRecruited);
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FPalIndividualCharacterSaveParameter PalSaveParameter;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FName CarreerTextId;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<FName> AppealTextIds;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 ContractFee;
    
    UPROPERTY(BlueprintAssignable)
    FOnPalRecruited OnRecruited;
    
private:
    UPROPERTY()
    bool bIsCreateRequested;
    
    UPROPERTY()
    TWeakObjectPtr<APalPlayerCharacter> RequestPlayerWeak;
    
public:
    UPalRecruiterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupPal(int32 BaseCampLevel, const UDataTable* RecruitTable, const UDataTable* AppealTable);
    
    UFUNCTION(BlueprintCallable)
    void RecruitPal(const FGuid& RequestPlayerUId);
    
private:
    UFUNCTION()
    void OnCreatedRecruitedPal(FPalInstanceID CreatedPalInstanceID);
    
    UFUNCTION()
    void OnCreatedDropPal(FPalInstanceID CreatedPalInstanceID);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropPal();
    
};

