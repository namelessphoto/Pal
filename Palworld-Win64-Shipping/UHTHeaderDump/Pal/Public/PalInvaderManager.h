#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalLogType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalIncidentBroadcastParameter.h"
#include "PalInvaderSaveData.h"
#include "PalInvaderStartPointInfo.h"
#include "PalWorldSubsystem.h"
#include "PalInvaderManager.generated.h"

class AActor;
class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameterInvader;
class UPalInvaderBaseCampObserver;
class UPalInvaderIncidentBase;

UCLASS(Blueprintable)
class PAL_API UPalInvaderManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(AActor*, FSpawnDummyNavInvokerDelegate, FTransform, Transform);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderStartDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderOnArrivedDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderEndDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnDummyNavInvokerDelegate SpawnDummyNavInvokerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FInvaderStartDelegate OnInvaderStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInvaderEndDelegate OnInvaderEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInvaderOnArrivedDelegate OnInvaderArrivedDelegate;
    
private:
    UPROPERTY(Transient)
    TMap<FGuid, FPalInvaderStartPointInfo> InvadeStartLocationList;
    
    UPROPERTY()
    TMap<FGuid, UPalInvaderBaseCampObserver*> Observers;
    
    UPROPERTY()
    TMap<FGuid, UPalInvaderIncidentBase*> Incidents;
    
    UPROPERTY()
    FGuid StartInvaderLogId;
    
    UPROPERTY()
    TMap<FGuid, FPalInvaderSaveData> InvaderSaveDataMapCache;
    
public:
    UPalInvaderManager();

    UFUNCTION(BlueprintCallable)
    void VisitorTravelTest();
    
    UFUNCTION(BlueprintCallable)
    void VisitorTravelLog(EPalLogType LogType);
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchRandom();
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchAll();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnDummyNavInvoker(const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UPalInvaderIncidentBase* RequestIncidentVisitorNPC_BP(UObject* OccuredBaseCamp, UPalIncidentDynamicParameterInvader* Parameter);
    
private:
    UFUNCTION()
    bool RequestIncidentVisitorNPC(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UPalInvaderIncidentBase* RequestIncidentInvaderEnemy_BP(UObject* OccuredBaseCamp, UPalIncidentDynamicParameterInvader* Parameter);
    
private:
    UFUNCTION()
    bool RequestIncidentInvaderEnemy(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveInvaderIncident(UPalIncidentBase* Incident);
    

    // Fix for true pure virtual functions not being implemented
};

