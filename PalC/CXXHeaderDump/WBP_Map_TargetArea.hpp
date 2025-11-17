#ifndef UE4SS_SDK_WBP_Map_TargetArea_HPP
#define UE4SS_SDK_WBP_Map_TargetArea_HPP

class UWBP_Map_TargetArea_C : public UUserWidget
{
    class UImage* Image_AreaFrame;                                                    // 0x0278 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0280 (size: 0x8)

    void SetSize(double InSize);
}; // Size: 0x288

#endif
