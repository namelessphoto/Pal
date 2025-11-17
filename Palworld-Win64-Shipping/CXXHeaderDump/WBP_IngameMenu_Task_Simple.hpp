#ifndef UE4SS_SDK_WBP_IngameMenu_Task_Simple_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_Simple_HPP

class UWBP_IngameMenu_Task_Simple_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_RemainPalNum;
    class UCanvasPanel* Canvas_TaskDetail;
    class UHorizontalBox* HorizontalBox_Alarm;
    class UHorizontalBox* HorizontalBox_WorkMode;
    class UImage* Image_21;
    class UImage* Image_22;
    class UImage* Image_23;
    class UImage* Image_24;
    class UImage* Image_25;
    class UImage* Image_454;
    class UImage* Image_Icon_AlarmMode;
    class UImage* Image_Icon_Bed;
    class UImage* Image_Icon_Pal;
    class UImage* Image_Icon_WorkMode;
    class UOverlay* Overlay_Alarm;
    class UOverlay* Overlay_WorkMode;
    class UBP_PalTextBlock_C* Text_AlarmMode;
    class UBP_PalTextBlock_C* Text_BaseCampName;
    class UBP_PalTextBlock_C* Text_BedInsufficient;
    class UBP_PalTextBlock_C* Text_BedNum;
    class UBP_PalTextBlock_C* Text_PalNum;
    class UBP_PalTextBlock_C* Text_RemainDIsplayPalNum;
    class UBP_PalTextBlock_C* Text_TaskDetail_Base;
    class UBP_PalTextBlock_C* Text_WorkHardType;
    class UVerticalBox* VerticalBox_All;
    class UVerticalBox* VerticalBox_TaskDetail;
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList;
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_1;
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_2;
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_3;
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_4;
    class UWBP_IngameMenu_TaskMaterial_C* WBP_IngameMenu_TaskMaterial;
    class UWrapBox* WrapBox_ItemInfo;
    TArray<class UWBP_IngameMenu_Task_SimpleList_C*> palDetailWidgetArray;
    FSlateFontInfo TaskDetailBaseFont;
    class UMaterial* completedTaskFontMaterial;
    class UMaterial* incompletedTaskFontMaterial;
    FDataTableRowHandle buildTaskMsgID;
    FDataTableRowHandle workerTaskMsgID;
    TMap<class EPalBaseCampWorkerDirectionBattleType, class FDataTableRowHandle> BattleTypeMsgMap;
    TMap<class EPalBaseCampWorkerDirectionBattleType, class TSoftObjectPtr<UTexture2D>> BattleTypeIconMap;
    TMap<class EPalBaseCampPassiveEffectWorkHardType, class FDataTableRowHandle> WorkHardTypeMsgMap;
    TMap<class EPalBaseCampPassiveEffectWorkHardType, class TSoftObjectPtr<UTexture2D>> WorkHardTypeIconMap;
    bool CollapseLastPal;

    void OnUISettingaChanged(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void SetEnableWorkHardInfo(bool IsEnable);
    void SetWorkHardType(EPalBaseCampPassiveEffectWorkHardType WorkHardType);
    void SetEnableWorkerBattleTypeInfo(bool IsEnable);
    void SetWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
    void RemoveAllItemDetail();
    void AddItemInfo(bool isHideWhenZero, FName ItemId, int64 itemNum, int64 gaugeMaxNumBorder);
    void SetVisibilityTaskDetail(ESlateVisibility NewVisibility);
    void Set Pal Slots(TArray<class UPalIndividualCharacterSlot*>& Slots, int32 maxPalNum, int32 Palbed);
    void SetRemainTimer(double remainTime);
    void RemoveTaskDetailText();
    void AddTaslDetailText(FText Text, int32 nowNum, int32 requireNum);
    void Set Task List(FPalBaseCampTaskCheckedData taskCheckedData, FPalBaseCampTaskDataSet TaskData);
    void SetRemainDIsplayPalNum(int32 Num);
    void Set Camp Pal and Bed Num(int32 nowPalNum, int32 maxPalNum, int32 BedNum);
    void Set Camp Name(FText BaseCampName);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_Simple(int32 EntryPoint);
};

#endif
