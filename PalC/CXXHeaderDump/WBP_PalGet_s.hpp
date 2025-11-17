#ifndef UE4SS_SDK_WBP_PalGet_s_HPP
#define UE4SS_SDK_WBP_PalGet_s_HPP

class UWBP_PalGet_s_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UCanvasPanel* Canvas_Title;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Dot_2;
    class UImage* Dot_3;
    class UImage* Dot_4;
    class UImage* Dot_5;
    class UImage* Line;
    class UImage* Line_0;
    class URetainerBox* RetainerBox_0;
    class UBP_PalTextBlock_C* Text_PalName;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_AttentionEffect_C* WBP_AttentionEffect;
    class UWBP_LvNum_C* WBP_LvNum;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    FDataTableRowHandle firstCaptureMsgHandle;
    FDataTableRowHandle captureMsgHandle;

    void ClearAdditionalText();
    void SetAdditionalText(FText Text);
    void SetupByCaptureInfo(FPalUIPalCaptureInfo CaptureInfo);
    void DisplayCaptureMessage(bool isFirstCapture);
    void SetupByTargetHandle(class UPalIndividualCharacterHandle* Handle, bool isVisibleLevel);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnOpenAnimeFinished();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalGet_s(int32 EntryPoint);
};

#endif
