#ifndef UE4SS_SDK_WBP_MainMenu_Money_HPP
#define UE4SS_SDK_WBP_MainMenu_Money_HPP

class UWBP_MainMenu_Money_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* Text_Money;

    void WBP_MainMenu_Money_AutoGenFunc(int64 NowMoney);
    void UpdateMoney(FString NowMoney);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Money(int32 EntryPoint);
};

#endif
