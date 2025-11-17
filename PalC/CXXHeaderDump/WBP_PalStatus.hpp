#ifndef UE4SS_SDK_WBP_PalStatus_HPP
#define UE4SS_SDK_WBP_PalStatus_HPP

class UWBP_PalStatus_C : public UPalUICharacterStatus
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_CaptureImage;
    class UImage* Image_Floor;
    class UImage* Image_Floor_1;
    class UImage* Image_PalReflection;
    class UBP_PalTextBlock_C* Text_NothingPal;
    class UWBP_MainMenu_Pal_00_C* WBP_MainMenu_Pal_00;
    class UWBP_PalMonsterInframeRender_C* WBP_PalInframeRender;
    TArray<class UPalIndividualCharacterHandle*> displayHandles;
    class UTextureRenderTarget2D* Render Target;
    int32 lastShowHandleIndex;
    int32 lastShowRenderPalIndex;
    FPalDataTableRowName_UIInputAction ToParameterDetailAction;
    FPalUIActionBindData ToParameterDetailActionHandle;
    FPalDataTableRowName_UIInputAction ToSkillDetailAction;
    FPalUIActionBindData ToSkillDetailActionHandle;
    bool IsOnePalModel;
    FPalDataTableRowName_UIInputAction FavoritePalAction;
    FPalDataTableRowName_UIInputAction DropPalAction;
    FPalUIActionBindData FavoritePalActionHandle;
    FPalUIActionBindData DropPalActionHandle;
    class UPalIndividualCharacterHandle* LastHoveredPalHandle;
    FDataTableRowHandle DropPalDialogMsgID;

    void OnClosedDropPalDialog(bool bResult);
    void OnTriggerDropPal();
    void UnhoveredAnyPalPanel_Internal();
    void HoveredAnyPalPanel_Internal(class UPalIndividualCharacterHandle* Handle);
    void ToSkillDetail();
    void Toggle Favorite Pal by Action();
    void ToParameterDetail();
    void Setup Input Action();
    void UnbindInputAction();
    void Is Editing Nick Name(bool& IsEditing);
    void BackToList();
    void ShouldBackList(bool& shouldBack);
    void Setup One Pal(class UPalIndividualCharacterHandle* CharacterHandle, bool Editable);
    class UWidget* BP_GetDesiredFocusTarget();
    void Get Panel Index from Handle(class UPalIndividualCharacterHandle* Handle, int32& Index, bool& IsValid);
    void Setup_MultiPal();
    void Setup_NothingPal();
    void Setup(TArray<class UPalIndividualCharacterHandle*>& Handles);
    void ClampInputNickName(FText InText, FText& clampedNickName);
    void NickNameFinalCheck(FText InText, TEnumAsByte<ETextCommit> textCommit, FText& finalNickName);
    void Construct();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void Destruct();
    void OnCompletedCaptureActorSetup();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature(FText NewNickName);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* targetHandle, EPalWazaID changeWazaID, EPalWazaID newWazaID);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature(EPalWazaID WazaID, class UPalIndividualCharacterHandle* targetHandle);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_6_OnToggleFavoritePal__DelegateSignature(class UPalIndividualCharacterHandle* CharacterHandle);
    void ExecuteUbergraph_WBP_PalStatus(int32 EntryPoint);
};

#endif
