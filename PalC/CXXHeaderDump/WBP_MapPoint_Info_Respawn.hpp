#ifndef UE4SS_SDK_WBP_MapPoint_Info_Respawn_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_Respawn_HPP

class UWBP_MapPoint_Info_Respawn_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UBP_PalTextBlock_C* BPPalTextBlock_Explain;
    class UCanvasPanel* CanvasPanel_Info;
    class UOverlay* Overlay_Guide;
    class UBP_PalTextBlock_C* Text_KeyGuide;
    class UWBP_MapPoint_Info_RespawnData_C* WBP_MapPoint_Info_RespawnData_0;
    class UWBP_MapPoint_Info_RespawnData_C* WBP_MapPoint_Info_RespawnData_1;
    FDataTableRowHandle RespawnMsgID;
    FDataTableRowHandle SpawnMsgId;

    void ToggleDisplay(bool ShouldDisplay);
    void SetPointInfo(FName PointId, bool IsInitSelect);
    void AdjustSide(FGeometry TargetGeometry);
    void ExecuteUbergraph_WBP_MapPoint_Info_Respawn(int32 EntryPoint);
};

#endif
