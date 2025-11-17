#ifndef UE4SS_SDK_WBP_PalGenderIcon_HPP
#define UE4SS_SDK_WBP_PalGenderIcon_HPP

class UWBP_PalGenderIcon_C : public UUserWidget
{
    class UImage* Image_Gender;

    void Setup(EPalGenderType GenderType);
};

#endif
