#ifndef UE4SS_SDK_WBP_PaldexScrollList_HPP
#define UE4SS_SDK_WBP_PaldexScrollList_HPP

class UWBP_PaldexScrollList_C : public UWBP_PalCommonScrollList_C
{
    FWBP_PaldexScrollList_COnHoveredAnyPanel OnHoveredAnyPanel;
    void OnHoveredAnyPanel(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    FWBP_PaldexScrollList_COnClickedAnyPanel OnClickedAnyPanel;
    void OnClickedAnyPanel(FName CharacterID, class UWBP_Paldex_List_C* Widget);

    void ClickByCharacterID(FName CharacterID);
    void GetWidgetByIndex(int32 Index, class UWBP_Paldex_List_C*& Widget);
    void ClickByIndex(int32 Index);
    void OnClickedPanel_Internal(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void GetFocusTargetByCharacterID(FName CharacterID, class UWidget*& Widget);
    void GetFocusTargetByIndex(int32 Index, class UWidget*& Target);
    void FocusByCharatcerID(FName CharacterID);
    void FocusByIndex(int32 Index);
    void CreateChild(FPalUIPaldex_DisplayInfo DisplayInfo);
    void OnHoveredPanel_Internal(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    void AddDisplayInfo(TArray<FPalUIPaldex_DisplayInfo>& infoArray);
    void OnClickedAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void OnHoveredAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
};

#endif
