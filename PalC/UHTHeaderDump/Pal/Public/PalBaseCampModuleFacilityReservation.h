#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectWorkerAvailableFacilityType.h"
#include "PalBaseCampFacilityCountPair.h"
#include "PalBaseCampFacilityUsageInfoSet.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleFacilityReservation.generated.h"

class UPalIndividualCharacterHandle;
class UPalMapObjectConcreteModelBase;

UCLASS()
class PAL_API UPalBaseCampModuleFacilityReservation : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalMapObjectWorkerAvailableFacilityType, FPalBaseCampFacilityUsageInfoSet> FacilityUsageInfoSetMap;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampFacilityCountPair> FacilityCounts;
    
public:
    UPalBaseCampModuleFacilityReservation();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnStartUseFacility_ServerInternal(UPalMapObjectConcreteModelBase* Model, UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION()
    void OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnFinishUseFacility_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
    UFUNCTION()
    void OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

