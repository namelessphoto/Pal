#ifndef UE4SS_SDK_WBP_Ingame_PlayerGauge_ThworObjectNone_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerGauge_ThworObjectNone_HPP

class UWBP_Ingame_PlayerGauge_ThworObjectNone_C : public UUserWidget
{
    class UBP_PalTextBlock_C* Text_Main;
    TMap<TEnumAsByte<E_PalUIThrowObjectNoneMessageType>, FDataTableRowHandle> MsgIDMap;
    FTimerHandle HideTimerHandle;

    void OnTimer_Hide();
    void Hide();
    void Display(double DisplayTime);
    void SetDisplayMode(TEnumAsByte<E_PalUIThrowObjectNoneMessageType> DisplayType);
};

#endif
