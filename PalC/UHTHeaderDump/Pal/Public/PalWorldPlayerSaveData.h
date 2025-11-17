#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalOtomoPalOrderType.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalLoggedinPlayerSaveDataRecordData.h"
#include "PalOrderedQuestSaveData.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerDataInventoryInfo.h"
#include "PalSkinInventoryInfo.h"
#include "PalWorldPlayerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldPlayerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PlayerUId;
    
    UPROPERTY()
    FPalInstanceID IndividualId;
    
    UPROPERTY()
    FGuid RespawnPointMapObjectInstanceId;
    
    UPROPERTY()
    FTransform LastTransform;
    
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FPalPlayerDataCharacterMakeInfo PlayerCharacterMakeData;
    
    UPROPERTY()
    FPalContainerId OtomoCharacterContainerId;
    
    UPROPERTY()
    EPalOtomoPalOrderType OtomoOrder;
    
    UPROPERTY()
    FPalPlayerDataInventoryInfo InventoryInfo;
    
    UPROPERTY()
    int32 TechnologyPoint;
    
    UPROPERTY()
    int32 bossTechnologyPoint;
    
    UPROPERTY()
    TArray<FName> UnlockedRecipeTechnologyNames;
    
    UPROPERTY()
    FPalContainerId PalStorageContainerId;
    
    UPROPERTY()
    FPalLoggedinPlayerSaveDataRecordData RecordData;
    
    UPROPERTY()
    FPalSkinInventoryInfo SkinInventoryInfo;
    
    UPROPERTY()
    bool bIsSelectedInitMapPoint;
    
    UPROPERTY()
    uint64 PsnAccountId;
    
    UPROPERTY()
    TArray<FPalOrderedQuestSaveData> OrderedQuestArray;
    
    UPROPERTY()
    TArray<FName> CompletedQuestArray;
    
    PAL_API FPalWorldPlayerSaveData();
};

