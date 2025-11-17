#ifndef UE4SS_SDK_WBP_Buildup_Pal_Status_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_Status_HPP

class UWBP_Buildup_Pal_Status_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_ResetInfo;
    class UCanvasPanel* CanvasPanel_Overall;
    class UImage* Image_44;
    class UOverlay* Overlay_BlockReset;
    class UBP_PalTextBlock_C* Text_Info;
    class UBP_PalTextBlock_C* Text_PossessedMoney_Num;
    class UBP_PalTextBlock_C* Text_RequireMoney_Num;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_1;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_2;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_3;
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent;
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_1;
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_2;
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_3;
    class UWBP_CommonButton_C* WBP_CommonButton;
    TArray<class UWBP_Buildup_Pal_StatusContent_C*> StatusContents;
    TMap<EPalCharacterStatusOperationName, int32> TargetStatusRankMap;
    FDataTableRowHandle RankupMsgId;
    FDataTableRowHandle ResetMsgId;
    FDataTableRowHandle RankupButtonMsgID;
    FDataTableRowHandle ResetButtonMsgID;
    FDataTableRowHandle ResetResultMsgId;
    FWBP_Buildup_Pal_Status_CInvokeRankUp InvokeRankUp;
    void InvokeRankup(TMap<EPalCharacterStatusOperationName, int32> Status);
    bool BlockInvoke;
    bool Is Upgrade;
    TArray<class UWBP_Buildup_Pal_Item_C*> Upgrade Items;
    int32 RequiredMoney;
    FWBP_Buildup_Pal_Status_CInvokeReset InvokeReset;
    void InvokeReset();
    TArray<FName> Item Ids;
    class UPalIndividualCharacterParameter* CurrentIndividualParam;
    TArray<EPalCharacterStatusOperationName> Status;
    TMap<EPalCharacterStatusOperationName, int32> CurrentRankMap;
    FDataTableRowHandle ReturnPalSoulMsgId;
    FDataTableRowHandle ConsumePalSoulMsgId;
    TMap<FName, int32> ReturnItems;
    FDataTableRowHandle RankupMsgId_ImportedPal;

    class UWidget* DoCustomNavigation(EUINavigation Navigation);
    void UpdateRequiredItemSufficiency();
    void Refresh Info();
    void Predict Status(EPalCharacterStatusOperationName Status, int32 TargetRank);
    void Update Confirm Button State();
    void GetFocusTarget(class UUserWidget*& Widget);
    void On Money Changed(int64 NewMoney);
    void Setup(class UPalIndividualCharacterHandle* Handle, const TArray<FName>& ItemIds);
    void SwitchPanel(bool IsUpgrade);
    void Construct();
    void BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ConfirmDialog(bool Confirmed);
    void EmptyEvent(bool bResult);
    void ShowResult();
    void OnInVisible(ESlateVisibility InVisibility);
    void ExecuteUbergraph_WBP_Buildup_Pal_Status(int32 EntryPoint);
    void InvokeReset__DelegateSignature();
    void InvokeRankup__DelegateSignature(TMap<EPalCharacterStatusOperationName, int32> Status);
};

#endif
