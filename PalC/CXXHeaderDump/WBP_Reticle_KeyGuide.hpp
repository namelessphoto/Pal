#ifndef UE4SS_SDK_WBP_Reticle_KeyGuide_HPP
#define UE4SS_SDK_WBP_Reticle_KeyGuide_HPP

class UWBP_Reticle_KeyGuide_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* Text_Cancel;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;
    bool CurrentIsCancel;
    FDataTableRowHandle MsgID;
    FName PlayerInputActionName;

    void SetKeyGuideInfo(TEnumAsByte<Enum_ReticleCancel_DisplayType> DisplayType);
    void Construct();
    void ExecuteUbergraph_WBP_Reticle_KeyGuide(int32 EntryPoint);
};

#endif
