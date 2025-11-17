#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCrimeStateInfo.h"
#include "PalInstanceID.h"
#include "PalSystemInitializeInterface.h"
#include "PalWorldSecurityWantedStateInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalWorldSecuritySystem.generated.h"

class APalTriggerAreaBase;
class UPalIndividualCharacterHandle;
class UPalWorldSecurityCrimeInstance;
class UPalWorldSecurityLawBase;

UCLASS(BlueprintType, Config=Game)
class PAL_API UPalWorldSecuritySystem : public UPalWorldSubsystem, public IPalSystemInitializeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportCriminalDelegate, UPalIndividualCharacterHandle*, CriminalHandle, FPalWorldSecurityWantedStateInfo, WantedStateInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReleaseWantedDelegate, UPalIndividualCharacterHandle*, CriminalHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterdAreaTriggerDelegate, APalTriggerAreaBase*, TriggerBase);
    
    UPROPERTY(BlueprintAssignable)
    FReportCriminalDelegate OnReportCriminalDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReleaseWantedDelegate OnReleaseWantedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRegisterdAreaTriggerDelegate OnRegisterdAreaTriggerDelegate;
    
private:
    UPROPERTY(Config)
    FName LawClassDirectoryPath;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalWorldSecurityLawBase*> Laws;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid GroupId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, FPalCrimeStateInfo> IndividualCrimeStateMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, FPalWorldSecurityWantedStateInfo> IndividualWantedStateMap;
    
    UPROPERTY(VisibleInstanceOnly)
    TMap<FGuid, UPalWorldSecurityCrimeInstance*> CrimeInstanceMap;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<TWeakObjectPtr<APalTriggerAreaBase>> WeakTriggerAreaList;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalIndividualCharacterHandle*> CriminalMap;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UPalWorldSecurityLawBase>> LawArray;
    
    UPalWorldSecuritySystem();

    UFUNCTION(BlueprintCallable)
    void ReportCriminal(UPalIndividualCharacterHandle* CriminalHandle, UPalIndividualCharacterHandle* ReporterHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWanted(UPalIndividualCharacterHandle* CriminalHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCrime(UPalIndividualCharacterHandle* CriminalHandle, const FGuid& CrimeInstanceId);
    
    UFUNCTION(BlueprintCallable)
    APalTriggerAreaBase* GetNearestTriggerArea(FVector Location);
    
    UFUNCTION(BlueprintPure)
    FName GetCrimeIdByCrimeInstanceId(const FGuid& CrimeInstanceId);
    

    // Fix for true pure virtual functions not being implemented
};

