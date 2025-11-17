#ifndef UE4SS_SDK_WBP_MapMarker_Win_HPP
#define UE4SS_SDK_WBP_MapMarker_Win_HPP

class UWBP_MapMarker_Win_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox;
    class UBP_PalTextBlock_C* Text_Head_MarkerCount;
    class UWBP_MapMarker_Button_C* WBP_MapMarker_Button;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_1;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_2;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_3;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_4;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_5;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_6;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_7;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_8;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_9;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_10;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_11;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_12;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_13;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_14;
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_15;
    TArray<class UWBP_MapMarker_Content_C*> Markers;
    class UWBP_Map_IconCustom_C* CurrentEdittingIcon;
    FWBP_MapMarker_Win_CRemoveCustomIcon RemoveCustomIcon;
    void RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon);
    TArray<class UTexture2D*> Textures;
    FWBP_MapMarker_Win_CChangeCustomIcon ChangeCustomIcon;
    void ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    int32 CurrentIndex;

    class UWidget* DoCustomNavigation(EUINavigation Navigation);
    void Construct();
    void ClickDeleteButton();
    void ChangeIconType(int32 Index);
    void SetEdittingIcon(class UWBP_Map_IconCustom_C* CustomIcon);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_MapMarker_Win(int32 EntryPoint);
    void ChangeCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    void RemoveCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon);
};

#endif
