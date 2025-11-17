#ifndef UE4SS_SDK_WBP_Map_IconPlayer_HPP
#define UE4SS_SDK_WBP_Map_IconPlayer_HPP

class UWBP_Map_IconPlayer_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow;
    class UBP_PalTextBlock_C* Text_PlayerName;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FPalPlayerInfoForMap Cached Map Info;

    void UpdateMapInfo(FPalPlayerInfoForMap mapInfo);
    void GetLocationPosition(FVector& LocationPosition);
    void SetIsLocalPlayer(bool IsLocal);
    void SetPlayerStateMapInfo(FPalPlayerInfoForMap mapInfo);
    void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconPlayer(int32 EntryPoint);
};

#endif
