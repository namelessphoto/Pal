#ifndef UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP

class UWBP_IngameMenu_Task_SimpleList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0610 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalActionInfo;                                     // 0x0618 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x0620 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x0628 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x0630 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x0638 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x0640 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterSlot> bindedSlot;                           // 0x0648 (size: 0x30)
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;                    // 0x0678 (size: 0x10)

    void UpdateNickname(FString NewNickName);
    void Setup(class UPalIndividualCharacterSlot* TargetSlot);
    void UpdateCondition(TArray<EPalUIConditionType>& Conditions);
    void Clear();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint);
}; // Size: 0x688

#endif
