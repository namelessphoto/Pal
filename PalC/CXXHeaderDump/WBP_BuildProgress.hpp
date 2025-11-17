#ifndef UE4SS_SDK_WBP_BuildProgress_HPP
#define UE4SS_SDK_WBP_BuildProgress_HPP

class UWBP_BuildProgress_C : public UPalUIBuildProgressWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IngameProgress_C* WBP_IngameProgress;
    bool ProgressFinished;

    void Finished_0A8F9BE3461D19DEC9F1BDA5236BDDCA();
    void Finished_C8A38F31462C1BFD0CAC6CAE7285A7E3();
    void OnUpdatedAssignCharacter(class UPalWorkBase* TargetWork);
    void SetProgress(class UPalWorkProgress* Work);
    void ClosePanel();
    void OnRequestClose(class UPalBuildProcess* Process);
    void Destruct();
    void OnSetup();
    void ShowProgress(EPalHUDDisplayType DisplayType);
    void ExecuteUbergraph_WBP_BuildProgress(int32 EntryPoint);
};

#endif
