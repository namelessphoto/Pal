#ifndef UE4SS_SDK_WBP_MapPoint_Info_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_HPP

class UWBP_MapPoint_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anｍ_In;
    class UCanvasPanel* Canvas_Boss_Clear;
    class UCanvasPanel* CanvasPanel_Info;
    class UHorizontalBox* HorizontalBox_TItle;
    class UImage* Image_Boss;
    class UImage* Image_Line;
    class UOverlay* Overlay_BossBanner;
    class UOverlay* Overlay_Guide_Dismantle;
    class UOverlay* Overlay_Guide_Info_2;
    class UOverlay* Overlay_Guide_Transport;
    class UBP_PalTextBlock_C* Text_Lv;
    class UBP_PalTextBlock_C* Text_LvNum;
    class UBP_PalTextBlock_C* Text_Name;
    class UVerticalBox* VerticalBox_Quest;
    class UWBP_MapPoint_Info_SubName_C* WBP_MapPoint_Info_SubName_Quest;
    TMap<class EPalBossType, class UTexture2D*> BossBannerImages;
    FDataTableRowHandle BaseCampMsgId;

    void AppendQuestInfo(FName QuestId);
    void SetQuestInfo(FName QuestId);
    void ToggleDisplay(bool ShouldDisplay);
    void SetBossInfo(bool IsDefeated, const FName& CharacterID, int32 Level, FName SpawnerID);
    void SetTowerBossInfo(class APalBossTower* BossTower, bool CanTeleport);
    void SetCampInfo(bool CanTeleport);
    void AdjustSide(FGeometry TargetGeometry);
    void SetFTInfo(FName FTID, bool CanTeleport);
    void ExecuteUbergraph_WBP_MapPoint_Info(int32 EntryPoint);
};

#endif
