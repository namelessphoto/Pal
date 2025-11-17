#ifndef UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP

class UWBP_IngameMenu_Task_SimpleList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* MainCanvas;
    class UBP_PalTextBlock_C* Text_PalActionInfo;
    class UBP_PalTextBlock_C* Text_PalName;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;
    TSoftObjectPtr<UPalIndividualCharacterSlot> bindedSlot;
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;

    void UpdateNickname(FString NewNickName);
    void Setup(class UPalIndividualCharacterSlot* TargetSlot);
    void UpdateCondition(TArray<EPalUIConditionType>& Conditions);
    void Clear();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint);
};

#endif
