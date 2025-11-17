#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGroupBase.generated.h"

class UPalGroupIndividualCharacterHandleIdArray;
class UPalIndividualCharacterHandle;

UCLASS(Abstract, BlueprintType)
class UPalGroupBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIndividualHandleDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedGroupNameDelegate, const FString&, NewGroupName);
    
    UPROPERTY(BlueprintAssignable)
    FChangedGroupNameDelegate OnChangedGroupName;
    
    UPROPERTY(BlueprintAssignable)
    FIndividualHandleDelegate OnEnterCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FIndividualHandleDelegate OnExitCharacterDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_GroupName)
    FString GroupName;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalGroupIndividualCharacterHandleIdArray* IndividualIdArray;
    
public:
    UPalGroupBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdateIndividualActor(UPalIndividualCharacterHandle* CharacterHandle);
    
private:
    UFUNCTION()
    void OnRep_GroupName();
    
public:
    UFUNCTION(BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintPure)
    FString GetGroupName() const;
    
};

