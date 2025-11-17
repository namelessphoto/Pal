#ifndef UE4SS_SDK_WBP_CharaCre_BG_HPP
#define UE4SS_SDK_WBP_CharaCre_BG_HPP

class UWBP_CharaCre_BG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Light_OnToOff;
    class UImage* Image;
    class UImage* Image_Tri_00;
    class UImage* Image_Tri_01;
    class UImage* Image_Tri_02;
    class UImage* Image_Tri_03;
    class UImage* Image_Tri_04;
    class UImage* Image_Tri_05;
    class UImage* Image_Tri_06;
    class UImage* Image_Tri_07;
    class UImage* Image_Tri_08;

    void AnmEvent_FloorIn();
    void AnmEvent_FloorOut();
    void ExecuteUbergraph_WBP_CharaCre_BG(int32 EntryPoint);
};

#endif
