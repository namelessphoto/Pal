#ifndef UE4SS_SDK_WBP_Map_Base_HPP
#define UE4SS_SDK_WBP_Map_Base_HPP

class UWBP_Map_Base_C : public UPalUIWorldMap
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Respawn_In;
    class UBackgroundBlur* BackgroundBlur_1;
    class UCanvasPanel* BG;
    class UHorizontalBox* HorizontalBox_Filter;
    class UHorizontalBox* HorizontalBox_Marker;
    class UImage* Image_1;
    class UOverlay* Overlay_RespawnMsg;
    class UBP_PalTextBlock_C* Text_CursorLocation;
    class UWBP_Map_Body_C* WBP_Map_Body;
    class UWBP_MapFilter_Win_C* WBP_MapFilter_Win;
    class UWBP_MapMarker_Win_C* WBP_MapMarker_Win;
    FName CloseMapActionName;
    FName FocusPlayerActionName;
    FName CustomMarkActionName;
    FName FilterActionName;
    FVector Min Land Scape Position;
    FVector Max Land Scape Position;
    TMap<class FGuid, class UWBP_WorldMap_IconBase_NoDesign_C*> CreatedIconMap;
    TMap<class FGuid, class UWBP_Map_IconCustom_C*> CustomMarkerMap;
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;
    TArray<class UWBP_Map_IconDeath_C*> DeathMarks;
    TArray<class UWBP_Map_IconTower_C*> BossTowerIcons;
    bool CustomMarkMode;
    bool FilterOpened;
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSetupIcon;
    bool For Respawn;
    TArray<class UWBP_Map_IconPlayer_C*> PlayerIcons;
    bool Can Fast Travel;
    bool IsInitSelect;
    TSet<EPalLocationType> FilterIconTypes;
    FDataTableRowHandle FTMsgID;
    FDataTableRowHandle RespawnMsgID;
    TArray<class UWBP_Map_IconBoss_C*> BossIcons;
    FName DismantalActionName;
    FDataTableRowHandle InitSelectMsgID;
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSelectedFTIcon;
    FName ShowQuestActionName;
    FWBP_Map_Base_COnRequestShowQuest OnRequestShowQuest;
    void OnRequestShowQuest(FName QuestId);
    TArray<class UWBP_Map_IconBoss_C*> NewVar;

    void CREATEDELEGATE_PROXYFUNCTION_0(const FGuid& MarkerId);
    void OnInputAction_ShowQuest();
    void UpdateBossIconState();
    void OnRequestCampDismantal();
    void Add Boss Icon(FPalUIBossSpawnerLoactionData SpawnerData);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void On Custom Mark Changed(FGuid Guid);
    void SetupCustomIcons();
    void ChangeFilter(EPalLocationType FilterMap, bool IsEnable);
    void SetFilter();
    void ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    void RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon);
    void AddCustomIcon(FGuid LocationId, FPalCustomMarkerSaveData MarkerData);
    void OnCloseAction();
    void Enable Custom Mark();
    void RefreshDeathMark(TMap<class FGuid, class UPalLocationBase*> LocationMap);
    void RefreshIconState(EPalLocationType Type, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
    void Setup Icon(EPalLocationType LocationType, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C*& Icon);
    void OnRemovedLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void Setup Boss Icon();
    void Setup Location Point Icon(const FGuid& LocationId, class UPalLocationBase* Location);
    void Setup Location Icon();
    void OnInputMethodChanged(ECommonInputType InputType);
    void OnRepliedDialog(bool bOK);
    void On Icon Clicked(class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
    class UWidget* BP_GetDesiredFocusTarget();
    void CloseMap();
    void OnSetup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Map_Base(int32 EntryPoint);
    void OnRequestShowQuest__DelegateSignature(FName QuestId);
};

#endif
