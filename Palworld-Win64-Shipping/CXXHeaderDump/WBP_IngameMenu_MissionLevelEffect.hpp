#ifndef UE4SS_SDK_WBP_IngameMenu_MissionLevelEffect_HPP
#define UE4SS_SDK_WBP_IngameMenu_MissionLevelEffect_HPP

class UWBP_IngameMenu_MissionLevelEffect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Arrow;
    class UImage* Image_Icon;
    class USizeBox* SizeBox_Aft;
    class UBP_PalTextBlock_C* Text_Efefct;
    class UBP_PalTextBlock_C* Text_Num_Aft;
    class UBP_PalTextBlock_C* Text_Num_Pre;
    FDataTableRowHandle InfoMsgId;
    class UTexture2D* Texture;

    void Construct();
    void SetEffectInfo(int32 PreCount, int32 AftCount, bool IsMax, bool CanLevelup);
    void ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect(int32 EntryPoint);
};

#endif
