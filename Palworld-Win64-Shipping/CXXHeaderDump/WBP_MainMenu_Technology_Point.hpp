#ifndef UE4SS_SDK_WBP_MainMenu_Technology_Point_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_Point_HPP

class UWBP_MainMenu_Technology_Point_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Boss;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Blink;
    class UWidgetAnimation* Anm_EnableToDisable;
    class UImage* BlinkEff_2;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;
    class UImage* Image_Icon_TechPoint_0;
    class UImage* Image_Icon_TechPoint_1;
    class UBP_PalTextBlock_C* Text_Point;
    bool IsBossTechPoint;
    FDataTableRowHandle NormalMsgId;
    FDataTableRowHandle BossMsgId;

    void OnUpdateTechnologyPoint(int32 TechnologyPoint);
    void AnmEvent_Enable();
    void AnmEvent_DIsable();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Technology_Point(int32 EntryPoint);
};

#endif
