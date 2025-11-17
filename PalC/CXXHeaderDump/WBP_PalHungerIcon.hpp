#ifndef UE4SS_SDK_WBP_PalHungerIcon_HPP
#define UE4SS_SDK_WBP_PalHungerIcon_HPP

class UWBP_PalHungerIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Red;
    class UWidgetAnimation* Anm_Orange;
    class UWidgetAnimation* Anm_Blue;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* BaseFlare;
    class UImage* Flare;
    class UImage* Image;
    class UImage* Image_595;
    class UImage* Line;
    class UImage* MI_Icon;
    class UImage* Shadow;
    class UBP_PalTextBlock_C* Text_Detail;
    FWBP_PalHungerIcon_COnFinishedClose OnFinishedClose;
    void OnFinishedClose();
    FDataTableRowHandle MealMsgID;
    FDataTableRowHandle LowHungerMsgID;

    void SetExistFoodFlag(bool IsExistFood);
    void Finished_52B2C4554CC22DF82B22ECB5253B6180();
    void Finished_2C1349EA46882EC657B89FA9AA7A0802();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void Construct();
    void ExecuteUbergraph_WBP_PalHungerIcon(int32 EntryPoint);
    void OnFinishedClose__DelegateSignature();
};

#endif
