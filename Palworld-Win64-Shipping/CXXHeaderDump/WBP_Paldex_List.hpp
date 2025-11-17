#ifndef UE4SS_SDK_WBP_Paldex_List_HPP
#define UE4SS_SDK_WBP_Paldex_List_HPP

class UWBP_Paldex_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_EmptyNormalToFocus;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_NotCapture;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Focus;
    class UHorizontalBox* HorizontalBox_DexNo;
    class UInvalidationBox* InvalidationBox_0;
    class UBP_PalTextBlock_C* Text_IndexTitle;
    class UBP_PalTextBlock_C* Text_IndexValue_1;
    class UBP_PalTextBlock_C* Text_IndexValue_10;
    class UBP_PalTextBlock_C* Text_IndexValue_100;
    class UBP_PalTextBlock_C* Text_PalName;
    class UBP_PalTextBlock_C* Text_PalName_Center;
    class UBP_PalTextBlock_C* Text_Suffix;
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement;
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement_1;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Paldex_List_COnHovered OnHovered;
    void OnHovered(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    FName ChachedBaseCharacterID;
    bool isNotCaptured;
    double notCapturedFraction;
    FWBP_Paldex_List_COnClicked OnClicked;
    void OnClicked(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    bool bEnableFocusAnim;
    FName BindedSkinName;

    void SetupBySimpleText(FText InText);
    void SetupForSkinData(FName SkinName, TSoftObjectPtr<UTexture2D> Texture, FText LocalizedSkinNameText);
    void SetupByCharacterID(FName CharacterID);
    void SetVisibilityNewMark(ESlateVisibility NewVisibility);
    void OnClickEvent();
    void Setup_Captured(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_Encounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_NotEncounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Focus();
    void Setup(FPalUIPaldex_DisplayInfo DisplayInfo);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_NotCapture();
    void Construct();
    void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Paldex_List(int32 EntryPoint);
    void OnClicked__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void OnHovered__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
};

#endif
