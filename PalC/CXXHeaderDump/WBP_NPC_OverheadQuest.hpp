#ifndef UE4SS_SDK_WBP_NPC_OverheadQuest_HPP
#define UE4SS_SDK_WBP_NPC_OverheadQuest_HPP

class UWBP_NPC_OverheadQuest_C : public UUserWidget
{
    class UWidgetAnimation* Anm_Show;
    class UCanvasPanel* Canvas_Main;
    class UCanvasPanel* Canvas_Sub;
    class UImage* Image_Frame;
    class UImage* Image_Frame_1;
    class UImage* Image_Frame_2;
    class UImage* Image_Frame_3;
    class UImage* Image_Main_Add;
    class UImage* Image_Main_Icon;
    class UImage* Image_Sub_Add;
    class UImage* Image_Sub_Icon;

    void Setup(FName QuestId);
};

#endif
