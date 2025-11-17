#ifndef UE4SS_SDK_WBP_MapMarker_Win_HPP
#define UE4SS_SDK_WBP_MapMarker_Win_HPP

class UWBP_MapMarker_Win_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Head_MarkerCount;                                  // 0x0288 (size: 0x8)
    class UWBP_MapMarker_Button_C* WBP_MapMarker_Button;                              // 0x0290 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content;                            // 0x0298 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_1;                          // 0x02A0 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_2;                          // 0x02A8 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_3;                          // 0x02B0 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_4;                          // 0x02B8 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_5;                          // 0x02C0 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_6;                          // 0x02C8 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_7;                          // 0x02D0 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_8;                          // 0x02D8 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_9;                          // 0x02E0 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_10;                         // 0x02E8 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_11;                         // 0x02F0 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_12;                         // 0x02F8 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_13;                         // 0x0300 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_14;                         // 0x0308 (size: 0x8)
    class UWBP_MapMarker_Content_C* WBP_MapMarker_Content_15;                         // 0x0310 (size: 0x8)
    TArray<class UWBP_MapMarker_Content_C*> Markers;                                  // 0x0318 (size: 0x10)
    class UWBP_Map_IconCustom_C* CurrentEdittingIcon;                                 // 0x0328 (size: 0x8)
    FWBP_MapMarker_Win_CRemoveCustomIcon RemoveCustomIcon;                            // 0x0330 (size: 0x10)
    void RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon);
    TArray<class UTexture2D*> Textures;                                               // 0x0340 (size: 0x10)
    FWBP_MapMarker_Win_CChangeCustomIcon ChangeCustomIcon;                            // 0x0350 (size: 0x10)
    void ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    int32 CurrentIndex;                                                               // 0x0360 (size: 0x4)

    class UWidget* DoCustomNavigation(EUINavigation Navigation);
    void Construct();
    void ClickDeleteButton();
    void ChangeIconType(int32 Index);
    void SetEdittingIcon(class UWBP_Map_IconCustom_C* CustomIcon);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_MapMarker_Win(int32 EntryPoint);
    void ChangeCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    void RemoveCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon);
}; // Size: 0x364

#endif
