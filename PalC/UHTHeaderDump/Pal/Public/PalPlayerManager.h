#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGamePlayerDataSaveInterface.h"
#include "PalInstanceID.h"
#include "PalPlayerClassStructSet.h"
#include "PalWorldSubsystem.h"
#include "PalPlayerManager.generated.h"

class UPalIndividualCharacterHandle;
class UPalLoginPlayer;
class UPalPlayerAccount;

UCLASS()
class UPalPlayerManager : public UPalWorldSubsystem, public IPalGamePlayerDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAccountDelegate, UPalPlayerAccount*, PlayerAccount);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalPlayerClassStructSet PlayerClassStructSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalPlayerAccount*> PlayerAccountMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalLoginPlayer*> LoginPlayerMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, UPalIndividualCharacterHandle*> HoldingNotYetLoginPlayerHandleMap;
    
public:
    UPalPlayerManager();

private:
    UFUNCTION()
    void OnCreatedIndividualHandleByAppliedSaveData_ServerInternal(FPalInstanceID IndividualId);
    

    // Fix for true pure virtual functions not being implemented
};

