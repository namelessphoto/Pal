#ifndef UE4SS_SDK_WBP_PalPlayerDebuffNoticeBox_HPP
#define UE4SS_SDK_WBP_PalPlayerDebuffNoticeBox_HPP

class UWBP_PalPlayerDebuffNoticeBox_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Debuff;
    TMap<TEnumAsByte<E_PalUIPlayerDebuffNoticeType>, UWBP_DebuffNotice_C*> DisplayingDebuffWidget;

    void RemoveDebuffNotice(TEnumAsByte<E_PalUIPlayerDebuffNoticeType> DebuffType);
    void AddDebuffNotice(TEnumAsByte<E_PalUIPlayerDebuffNoticeType> DebuffType);
    void Destruct();
    void ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox(int32 EntryPoint);
};

#endif
