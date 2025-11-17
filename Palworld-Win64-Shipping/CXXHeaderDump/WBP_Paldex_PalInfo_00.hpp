#ifndef UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP
#define UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP

class UWBP_Paldex_PalInfo_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_PartnerSkill;
    class UImage* FoodAmountBase;
    class UHorizontalBox* HorizontalBox_CaptureNum;
    class UOverlay* Overlay_NoDropItem;
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillDesc;
    class UScrollBox* ScrollBox;
    class UCanvasPanel* SkillInfo;
    class UBP_PalTextBlock_C* Text_CaptureNumValue;
    class UBP_PalTextBlock_C* Text_PartnerSkillName;
    class UUniformGridPanel* UniformGrid_Suitability;
    class UWBP_MainMenu_Pal_FoodAmount_C* WBP_MainMenu_Pal_FoodAmount;
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem;
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_1;
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_2;
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_3;
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_4;
    class UWBP_Paldex_Task_C* WBP_Paldex_Task;
    TArray<class UWBP_Paldex_DropItem_C*> DropItemWidgetArray;
    double New Offset;

    void ChangePalInfoScrollOffset(double Offset);
    void SetupCaptureBonusInfo(FName CharacterID);
    void HideDropItems();
    void Setup_Captured(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_Encounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_NotEncounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Paldex_PalInfo_00(int32 EntryPoint);
};

#endif
