#pragma once
#include "CoreMinimal.h"
#include "EPalIncidentState.h"
#include "PalIncidentInitializeParameter.h"
#include "PalIncidentNotifyParameter.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalIncidentSystem.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UDataTable;
class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameter;
class UPalIncidentList;
class UPalIncidentNotifyListener;

UCLASS(Blueprintable)
class PAL_API UPalIncidentSystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIncidentStateNotify, EPalIncidentState, IncidentState, const FPalIncidentNotifyParameter&, Parameter);
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ResidentIncidentList;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSubclassOf<UPalIncidentBase>> IncidentClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* IncidentParameterDataTable;
    
    UPROPERTY(BlueprintAssignable)
    FIncidentStateNotify OnIncidentStateNotifyDelegate;
    
protected:
    UPROPERTY(VisibleInstanceOnly)
    TArray<UPalIncidentBase*> WaitingIncidents;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<UPalIncidentBase*> ExecuteIncidents;
    
private:
    UPROPERTY()
    TArray<UPalIncidentBase*> ResidentIncidents;
    
    UPROPERTY()
    TArray<UPalIncidentNotifyListener*> Listeners;
    
public:
    UPalIncidentSystem();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TalkCustomFunction_VisitorPresentAndReturn(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const UDataTable* CunstomFuncParam);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TalkCustomFunction_Duel(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const UDataTable* CunstomFuncParam);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TalkCustomFunction_AttackToPlayer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const UDataTable* CunstomFuncParam);
    
    UFUNCTION(BlueprintCallable)
    void TalkCustomFunction_AddItemToInventory(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const UDataTable* CunstomFuncParam);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalIncidentList* RequestIncidents(const TArray<FName>& Incidents, UObject* OccuredObject, UObject* OwnerObject, UPalIncidentDynamicParameter* Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalIncidentBase* RequestIncident(FName IncidentId, UObject* OccuredObject, UObject* OwnerObject, UPalIncidentDynamicParameter* Parameter);
    
private:
    UFUNCTION()
    void NotifyIncidentState(EPalIncidentState NotifyType, const FPalIncidentNotifyParameter& Parameter);
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void LotteryItemAndNum(const UDataTable* PresentLotteryDataTable, FName& OutItemName, int32& OutNum) const;
    
private:
    UFUNCTION()
    bool IsIncidentBeginAllowed(UPalIncidentBase* Incident);
    
    UFUNCTION()
    UPalIncidentBase* GenerateIncident(FPalIncidentInitializeParameter& InitializeParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceStopByOwner(UObject* OwnerObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopByOccuredObject(UObject* OccuredObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopByIncidentType(FName IncidentType);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopByIncidentId(FName IncidentId);
    
};

