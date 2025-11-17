#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleTransportItemStatus.h"
#include "PalBaseCampModuleTransportItemTarget.h"
#include "PalInstanceID.h"
#include "PalBaseCampModuleTransportItemDirector.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemContainerModule;
class UPalWorkAssign;
class UPalWorkBase;

UCLASS()
class UPalBaseCampModuleTransportItemDirector : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampModuleTransportItemStatus> TransportItemStatusMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSet<FGuid> TransportItemDepotSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampModuleTransportItemTarget> TransportTargetMap;
    
public:
    UPalBaseCampModuleTransportItemDirector();

private:
    UFUNCTION()
    void OnUpdateMapObjectContainer(UPalMapObjectItemContainerModule* ContainerModule);
    
    UFUNCTION()
    void OnUnassignWorkTransportItemTarget(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnUnassignWorkRequirement(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnNotAvailableMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnAvailableMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnAssignWorkTransportItemTarget(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
    UFUNCTION()
    void OnAssignWorkRequirement(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
};

