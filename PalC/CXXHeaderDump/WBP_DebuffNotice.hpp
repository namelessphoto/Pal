#ifndef UE4SS_SDK_WBP_DebuffNotice_HPP
#define UE4SS_SDK_WBP_DebuffNotice_HPP

class UWBP_DebuffNotice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Flash;
    class UImage* Base;
    class UImage* Frame;
    class UBP_PalTextBlock_C* Text_DebuffName;
    TMap<TEnumAsByte<E_PalUIPlayerDebuffNoticeType>, FDataTableRowHandle> MsgIDMap;

    void Setup(TEnumAsByte<E_PalUIPlayerDebuffNoticeType> DebuffType);
    void AnmEvent_Flash();
    void ExecuteUbergraph_WBP_DebuffNotice(int32 EntryPoint);
};

#endif
