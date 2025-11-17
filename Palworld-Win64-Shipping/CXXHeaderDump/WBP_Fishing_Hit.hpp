#ifndef UE4SS_SDK_WBP_Fishing_Hit_HPP
#define UE4SS_SDK_WBP_Fishing_Hit_HPP

class UWBP_Fishing_Hit_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Hit;
    class UImage* Image_Bloom;
    class UImage* Image_Mark;
    class UImage* Image_Mark_1;

    void Finished_2E34FB9345682690EC9932908042E186();
    void AnmEvent_Hit();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Fishing_Hit(int32 EntryPoint);
};

#endif
