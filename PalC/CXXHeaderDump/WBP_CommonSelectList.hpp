#ifndef UE4SS_SDK_WBP_CommonSelectList_HPP
#define UE4SS_SDK_WBP_CommonSelectList_HPP

class UWBP_CommonSelectList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalBox_0;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_2;
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_3;
    TMap<class FName, class FName> SelectListMap;
    FWBP_CommonSelectList_COnSelect OnSelect;
    void OnSelect(FName SelectId);

    void GetFirstFocusTarget(class UWidget*& Widget);
    void OnListClicked(class UWBP_GuildMemberMenuList_C* Button);
    void Setup();
    void Construct();
    void ExecuteUbergraph_WBP_CommonSelectList(int32 EntryPoint);
    void OnSelect__DelegateSignature(FName SelectId);
};

#endif
