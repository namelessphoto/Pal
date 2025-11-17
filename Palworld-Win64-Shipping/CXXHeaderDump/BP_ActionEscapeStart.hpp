#ifndef UE4SS_SDK_BP_ActionEscapeStart_HPP
#define UE4SS_SDK_BP_ActionEscapeStart_HPP

class UBP_ActionEscapeStart_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalFacialComponent* PalFacial;
    bool UseMontageFacial;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionEscapeStart(int32 EntryPoint);
};

#endif
