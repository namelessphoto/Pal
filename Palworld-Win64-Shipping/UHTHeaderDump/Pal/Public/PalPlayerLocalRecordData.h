#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalPlayerInventoryType.h"
#include "EPalTribeID.h"
#include "PalArenaRule.h"
#include "PalInstanceID.h"
#include "PalOtomoLoadoutData.h"
#include "PalPlayerLocalRecordData.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalPlayerLocalRecordData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<EPalTribeID, int32> Local_ActivateOtomoCount;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<EPalTribeID, bool> Local_PalEncountFlag;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<EPalTribeID, bool> Local_PalDexNewFlag;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_NoteCheckedFlag;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<EPalPlayerInventoryType, int32> Local_LoadoutSelectedIndexMap;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<FName, int32> Local_NewUnlockedBuilds;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    bool Local_IsBuildMenuChecked;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_NewUnlockedTechs;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_ShowedCutsceneFlag;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 Local_PlayTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    int32 Local_DoctorSurgiCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    int32 Local_DoctorLastSurgiDay;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FString, int32> Local_ItemRequestCircumCountMap;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_NpcItemCircumCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_PalDisplayNPCDataTableProgress;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_NpcPalDexRewardCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_NpcBossDefeatRewardCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FName, bool> Local_NpcPalCaptureRewardCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    FPalArenaRule Local_ArenaRule;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TArray<FName> Local_ItemQuickMoveExceptionIDList;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TArray<FPalOtomoLoadoutData> Local_OtomoLoadoutSaveData;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, int32> Local_MaxFriendshipPalIds;
    
    UPalPlayerLocalRecordData();

    UFUNCTION(BlueprintCallable)
    void ResetQuickStackExceptList();
    
    UFUNCTION(BlueprintCallable)
    void RemoveQuickStackExceptId(const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable)
    bool AddQuickStackExceptId(const FName StaticItemId);
    
};

