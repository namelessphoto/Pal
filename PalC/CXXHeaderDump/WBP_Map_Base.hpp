#ifndef UE4SS_SDK_WBP_Map_Base_HPP
#define UE4SS_SDK_WBP_Map_Base_HPP

class UWBP_Map_Base_C : public UPalUIWorldMap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Respawn_In;                                           // 0x0438 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_1;                                          // 0x0440 (size: 0x8)
    class UCanvasPanel* BG;                                                           // 0x0448 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Filter;                                       // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Marker;                                       // 0x0458 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0460 (size: 0x8)
    class UOverlay* Overlay_RespawnMsg;                                               // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CursorLocation;                                    // 0x0470 (size: 0x8)
    class UWBP_Map_Body_C* WBP_Map_Body;                                              // 0x0478 (size: 0x8)
    class UWBP_MapFilter_Win_C* WBP_MapFilter_Win;                                    // 0x0480 (size: 0x8)
    class UWBP_MapMarker_Win_C* WBP_MapMarker_Win;                                    // 0x0488 (size: 0x8)
    FName CloseMapActionName;                                                         // 0x0490 (size: 0x8)
    FName FocusPlayerActionName;                                                      // 0x0498 (size: 0x8)
    FName CustomMarkActionName;                                                       // 0x04A0 (size: 0x8)
    FName FilterActionName;                                                           // 0x04A8 (size: 0x8)
    FVector Min Land Scape Position;                                                  // 0x04B0 (size: 0x18)
    FVector Max Land Scape Position;                                                  // 0x04C8 (size: 0x18)
    TMap<class FGuid, class UWBP_WorldMap_IconBase_NoDesign_C*> CreatedIconMap;       // 0x04E0 (size: 0x50)
    TMap<class FGuid, class UWBP_Map_IconCustom_C*> CustomMarkerMap;                  // 0x0530 (size: 0x50)
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;                         // 0x0580 (size: 0x50)
    TArray<class UWBP_Map_IconDeath_C*> DeathMarks;                                   // 0x05D0 (size: 0x10)
    TArray<class UWBP_Map_IconTower_C*> BossTowerIcons;                               // 0x05E0 (size: 0x10)
    bool CustomMarkMode;                                                              // 0x05F0 (size: 0x1)
    bool FilterOpened;                                                                // 0x05F1 (size: 0x1)
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSetupIcon;                        // 0x05F8 (size: 0x8)
    bool For Respawn;                                                                 // 0x0600 (size: 0x1)
    TArray<class UWBP_Map_IconPlayer_C*> PlayerIcons;                                 // 0x0608 (size: 0x10)
    bool Can Fast Travel;                                                             // 0x0618 (size: 0x1)
    bool IsInitSelect;                                                                // 0x0619 (size: 0x1)
    TSet<EPalLocationType> FilterIconTypes;                                           // 0x0620 (size: 0x50)
    FDataTableRowHandle FTMsgID;                                                      // 0x0670 (size: 0x10)
    FDataTableRowHandle RespawnMsgID;                                                 // 0x0680 (size: 0x10)
    TArray<class UWBP_Map_IconBoss_C*> BossIcons;                                     // 0x0690 (size: 0x10)
    FName DismantalActionName;                                                        // 0x06A0 (size: 0x8)
    FDataTableRowHandle InitSelectMsgID;                                              // 0x06A8 (size: 0x10)
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSelectedFTIcon;                   // 0x06B8 (size: 0x8)
    FName ShowQuestActionName;                                                        // 0x06C0 (size: 0x8)
    FWBP_Map_Base_COnRequestShowQuest OnRequestShowQuest;                             // 0x06C8 (size: 0x10)
    void OnRequestShowQuest(FName QuestId);
    TArray<class UWBP_Map_IconBoss_C*> NewVar;                                        // 0x06D8 (size: 0x10)

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
}; // Size: 0x6E8

#endif
