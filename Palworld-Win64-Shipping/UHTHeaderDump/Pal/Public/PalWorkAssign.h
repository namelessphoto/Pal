#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalWorkWorkerState.h"
#include "EPalWorkWorkerWorkingState.h"
#include "PalInstanceID.h"
#include "PalWorkAssignHandleId.h"
#include "PalWorkAssign.generated.h"

class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalWorkBase;

UCLASS(BlueprintType)
class PAL_API UPalWorkAssign : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalWorkAssignHandleId HandleId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalInstanceID AssignedIndividualId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkWorkerState State;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bFixed;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkWorkerWorkingState WorkingState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector LocalRandomWorkLocation;
    
public:
    UPalWorkAssign();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool IsWorking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWorkable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFixed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedIndividualId(const FPalInstanceID& IndividualId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssigned() const;
    
    UFUNCTION(BlueprintPure)
    EPalWorkWorkerWorkingState GetWorkingState() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetWorkId() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintPure)
    EPalWorkWorkerState GetState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLocationIndex() const;
    
    UFUNCTION(BlueprintPure)
    FPalWorkAssignHandleId GetId() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterParameter* GetAssignedIndividualParameter() const;
    
    UFUNCTION(BlueprintPure)
    FPalInstanceID GetAssignedIndividualId() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetAssignedIndividualHandle() const;
    
    UFUNCTION(BlueprintPure)
    UPalCharacterParameterComponent* GetAssignedCharacterParameterComponent() const;
    
};

