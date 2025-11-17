#ifndef UE4SS_SDK_BP_ActionEncount_HPP
#define UE4SS_SDK_BP_ActionEncount_HPP

class UBP_ActionEncount_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalFacialComponent* PalFacial;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionEncount(int32 EntryPoint);
};

#endif
