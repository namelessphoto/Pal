#ifndef UE4SS_SDK_WBP_AssignBoard_WorkListBase_HPP
#define UE4SS_SDK_WBP_AssignBoard_WorkListBase_HPP

class UWBP_AssignBoard_WorkListBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FPalUIBaseCampWorkFixedAssignInfo MyAssignInfo;
    FWBP_AssignBoard_WorkListBase_COnSelected OnSelected;
    void OnSelected(class UWBP_AssignBoard_WorkListBase_C* Widget);
    FWBP_AssignBoard_WorkListBase_COnHovered OnHovered;
    void OnHovered(class UWBP_AssignBoard_WorkListBase_C* Widget);
    FWBP_AssignBoard_WorkListBase_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_AssignBoard_WorkListBase_C* Widget);
    bool IsFirstSetup;

    void GetFocusTarget(class UWidget*& TargetWidget);
    void Unbind();
    void NotifySelect();
    void GetAssignInfo(FPalUIBaseCampWorkFixedAssignInfo& AssignInfo);
    void Setup();
    void SetAssignInfo(FPalUIBaseCampWorkFixedAssignInfo AssignInfo);
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void AnmEvent_Enable();
    void AnmEvent_DIsable();
    void ExecuteUbergraph_WBP_AssignBoard_WorkListBase(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnHovered__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnSelected__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
};

#endif
