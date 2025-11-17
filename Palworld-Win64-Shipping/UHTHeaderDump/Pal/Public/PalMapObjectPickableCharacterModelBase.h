#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalCharacterStoredParameterId.h"
#include "PalCharacterStoredParameterInfo.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPickableCharacterModelBase.generated.h"

UCLASS()
class PAL_API UPalMapObjectPickableCharacterModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalCharacterStoredParameterId StoredParameterId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalCharacterStoredParameterInfo ForRead_StoredParameter;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid LocationId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FDateTime CreatedAtRealTime;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid PickupablePlayerUid;
    
public:
    UPalMapObjectPickableCharacterModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestPickup_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPickup();
    
protected:
    UFUNCTION()
    void OnRemovedStoredCharacter_ServerInternal(const FPalCharacterStoredParameterId& RemovedID);
    
public:
    UFUNCTION(BlueprintPure)
    FDateTime GetCreatedAtRealTime() const;
    
    UFUNCTION(BlueprintPure)
    FPalIndividualCharacterSaveParameter GetCharacterSaveParameter() const;
    
};

