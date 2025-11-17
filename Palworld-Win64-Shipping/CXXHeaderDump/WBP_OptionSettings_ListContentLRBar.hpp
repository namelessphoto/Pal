#ifndef UE4SS_SDK_WBP_OptionSettings_ListContentLRBar_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContentLRBar_HPP

class UWBP_OptionSettings_ListContentLRBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_56;

    void SetActive(bool IsActive);
    void ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar(int32 EntryPoint);
};

#endif
