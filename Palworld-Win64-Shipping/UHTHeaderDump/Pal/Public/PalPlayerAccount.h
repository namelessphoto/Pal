#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalPlayerAccountState.h"
#include "PalInstanceID.h"
#include "PalPlayerAccount.generated.h"

class UPalIndividualCharacterHandle;
class UPalPlayerDataCharacterMake;
class UPalPlayerDataPalStorage;
class UPalPlayerInventoryData;
class UPalPlayerOtomoData;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
class UPalQuestManager;
class UPalTechnologyData;

UCLASS()
class PAL_API UPalPlayerAccount : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID InstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalPlayerAccountState State;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform LastSavedTransform;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerOtomoData* OtomoData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerDataCharacterMake* CharacterMakeData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerInventoryData* InventoryData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerDataPalStorage* PalStorage;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalTechnologyData* TechnologyData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerRecordData* RecordData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerSkinData* PlayerSkinData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalQuestManager* QuestManager;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIsSelectedInitMapPoint;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bShouldSaveOnNextTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    uint64 PsnAccountId;
    
public:
    UPalPlayerAccount();

};

