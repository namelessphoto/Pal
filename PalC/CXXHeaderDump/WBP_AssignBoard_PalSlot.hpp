#ifndef UE4SS_SDK_WBP_AssignBoard_PalSlot_HPP
#define UE4SS_SDK_WBP_AssignBoard_PalSlot_HPP

class UWBP_AssignBoard_PalSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Check;
    class UImage* Image_FocusedFrame;
    class UImage* Image_PalDying;
    class UOverlay* Overlay_FixedAssign;
    class UOverlay* Overlay_GenderIcon;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;
    FGuid ReferemceWorkId;

    void SetReferenceWorkId(FGuid WorkId);
    void OnUpdateWorkId_Binded(FGuid WorkId, bool IsFixedAssign);
    void SetVisibilityFixedAssignFrame(ESlateVisibility NewVisibility);
    void SetVisibilityGenderIcon(ESlateVisibility NewVisibility);
    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void OnUpdateHP_Binded(int64 nowHP, int64 nowMaxHP);
    void SetVisibilityCheck(ESlateVisibility NewVisibility);
    void SetVisibilityFocusFrame(ESlateVisibility NewVisibility);
    void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C*& iconWidget);
    void OnInitialized();
    void ExecuteUbergraph_WBP_AssignBoard_PalSlot(int32 EntryPoint);
};

#endif
