#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInventoryType.h"
#include "EPalTribeID.h"
#include "PalArenaRule.h"
#include "PalCompletedQuestSaveData.h"
#include "PalCustomMarkerSaveData.h"
#include "PalInstanceID.h"
#include "PalOrderedQuestSaveData.h"
#include "PalOtomoLoadoutData.h"
#include "PalTutorialTriggerSaveData.h"
#include "PalLocalSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EPalTribeID, int32> Local_ActivateOtomoCount;
    
    UPROPERTY()
    TMap<EPalTribeID, bool> Local_PalEncountFlag;
    
    UPROPERTY()
    TMap<FName, bool> Local_NoteCheckedFlag;
    
    UPROPERTY()
    TMap<EPalPlayerInventoryType, int32> Local_LoadoutSelectedIndexMap;
    
    UPROPERTY()
    TMap<FName, int32> Local_NewUnlockedBuilds;
    
    UPROPERTY()
    bool Local_IsBuildMenuChecked;
    
    UPROPERTY()
    TMap<FName, int32> Local_NPCTalkCountMap;
    
    UPROPERTY()
    TMap<FName, bool> Local_NewUnlockedTechs;
    
    UPROPERTY()
    TMap<FName, bool> Local_ShowedCutsceneFlag;
    
    UPROPERTY()
    int32 Local_PlayTime;
    
    UPROPERTY()
    int32 Local_DoctorSurgiCount;
    
    UPROPERTY()
    int32 Local_DoctorLastSurgiDay;
    
    UPROPERTY()
    TMap<FString, int32> Local_ItemRequestCircumCountMap;
    
    UPROPERTY()
    TMap<FName, bool> Local_NpcItemCircumCount;
    
    UPROPERTY()
    TMap<FName, bool> Local_PalDisplayNPCDataTableProgress;
    
    UPROPERTY()
    TMap<FName, bool> Local_NpcPalDexRewardCount;
    
    UPROPERTY()
    TMap<FName, bool> Local_NpcBossDefeatRewardCount;
    
    UPROPERTY()
    TMap<FName, bool> Local_NpcPalCaptureRewardCount;
    
    UPROPERTY()
    TArray<uint8> worldMapMaskTexture;
    
    UPROPERTY()
    TArray<uint8> WorldMapMaskTextureV4;
    
    UPROPERTY()
    TArray<FPalCustomMarkerSaveData> Local_CustomMarkerSaveData;
    
    UPROPERTY()
    TArray<FPalTutorialTriggerSaveData> Local_TutorialTriggerSaveData;
    
    UPROPERTY()
    TArray<FPalCompletedQuestSaveData> Local_CompletedTutorialQuestSaveData;
    
    UPROPERTY()
    TArray<FPalOrderedQuestSaveData> Local_OrderedTutorialQuestSaveData;
    
    UPROPERTY()
    FPalArenaRule Local_ArenaRule;
    
    UPROPERTY()
    TArray<FName> Local_ItemQuickMoveExceptionIDList;
    
    UPROPERTY()
    TArray<FPalOtomoLoadoutData> Local_OtomoLoadoutSaveData;
    
    UPROPERTY()
    FName TrackingQuestId;
    
    UPROPERTY()
    TMap<FPalInstanceID, int32> Local_MaxFriendshipPalIds;
    
    UPROPERTY()
    bool bUnlockedBlueprintCategoryInBuildMenu;
    
    PAL_API FPalLocalSaveData();
};

