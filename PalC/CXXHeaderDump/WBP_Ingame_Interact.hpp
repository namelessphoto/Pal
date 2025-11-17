#ifndef UE4SS_SDK_WBP_Ingame_Interact_HPP
#define UE4SS_SDK_WBP_Ingame_Interact_HPP

class UWBP_Ingame_Interact_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Press;
    class UWidgetAnimation* Anm_Push_long_nogauge;
    class UWidgetAnimation* Anm_push;
    class UWidgetAnimation* Anm_Push_long_Arrow;
    class UWidgetAnimation* Anm_Push_long;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UBackgroundBlur* BackgroundBlur_117;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_101;
    class UCanvasPanel* CanvasPanel_btn;
    class UImage* Image_BlockInteract;
    class UImage* Interact_PushEff_00;
    class UImage* Interact_PushEff_01;
    class UImage* InteractArrow;
    class UImage* InteractBase;
    class UWBP_PalKeyGuideIcon_C* KeyGuide;
    class URetainerBox* RetainerBox_111;
    TMap<class EPalInteractiveObjectActionType, class TSoftObjectPtr<UTexture2D>> IconMap;
    double rightPadding;
    TMap<class EPalInteractiveObjectActionType, class FDataTableRowHandle> actionInputMap;

    void SetIsValidInteract(bool IsValidFlag);
    void SetVisibilityLongPushParts(ESlateVisibility NewVisibility);
    void SetPartsSize(class UWidget* TargetWidget, FVector2D InSize);
    void GetPartsSize(class UWidget* TargetWidget, FVector2D& Size);
    void FitImageSize();
    void SetInteractText(FText Text);
    void SetActionType(EPalInteractiveObjectActionType ActionType);
    void SetInteractable(bool IsInteractable);
    void AnmEvent_Open();
    void AnmEven_Press();
    void AnmEvent_Reset_ForClose();
    void AnmEvent_Close();
    void AnmEvernt_LongPush_withGauge(double Time);
    void AnmEvent_Button_Start(EPalInteractiveObjectButtonType buttonType, double Time);
    void AnmEvent_LongPush_WithoutGauge();
    void AnmEvent_Button_End(EPalInteractiveObjectButtonType buttonType);
    void AnmEvent_Reset_ForOpen();
    void ExecuteUbergraph_WBP_Ingame_Interact(int32 EntryPoint);
};

#endif
