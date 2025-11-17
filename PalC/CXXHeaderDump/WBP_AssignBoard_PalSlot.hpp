#ifndef UE4SS_SDK_WBP_AssignBoard_PalSlot_HPP
#define UE4SS_SDK_WBP_AssignBoard_PalSlot_HPP

class UWBP_AssignBoard_PalSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08A0 (size: 0x8)
    class UImage* Image_Check;                                                        // 0x08A8 (size: 0x8)
    class UImage* Image_FocusedFrame;                                                 // 0x08B0 (size: 0x8)
    class UImage* Image_PalDying;                                                     // 0x08B8 (size: 0x8)
    class UOverlay* Overlay_FixedAssign;                                              // 0x08C0 (size: 0x8)
    class UOverlay* Overlay_GenderIcon;                                               // 0x08C8 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x08D0 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;                                    // 0x08D8 (size: 0x8)
    FGuid ReferemceWorkId;                                                            // 0x08E0 (size: 0x10)

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
}; // Size: 0x8F0

#endif
