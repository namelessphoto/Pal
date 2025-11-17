#ifndef UE4SS_SDK_WBP_AutoSave_HPP
#define UE4SS_SDK_WBP_AutoSave_HPP

class UWBP_AutoSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Failed_Out;
    class UWidgetAnimation* Anm_Failed_In;
    class UWidgetAnimation* Anm_Saving;
    class UCanvasPanel* Canvas_AutoSave;
    class UCanvasPanel* Canvas_SaveFailed;
    class UImage* Image_FailedBase;
    class UImage* Image_FailedBase_1;
    class UImage* Image_FailedIcon;
    class UImage* Image_Flash;
    class UImage* Image_IconBase;
    class UImage* Image_IconPart_0;
    class UImage* Image_IconPart_1;
    class UImage* Image_IconPart_2;
    class UImage* Image_IconPart_3;
    class UImage* Image_IconPart_4;
    class UImage* Image_IconPart_5;
    bool IsForceDisplayngTime;
    FTimerHandle ForceDisplayTimerHandle;
    TMap<class FName, class bool> SavingFlagMap;
    FName WorldSavingKey;
    FName LocalSavingKey;
    double ForceDisplayTime;
    FTimerHandle WaitFailedSaveDisplayTimer;
    double FailedSaveNoticeDIsplayTime;

    void HideFailedSaveNotice();
    void DisplayFailedSaveNotice();
    void OnEndedForceDisplayingTime();
    void IsAllSaveCompleted(bool& bCompleted);
    void EndSave(FName SavingKey);
    void StartSaving(FName SavingKey);
    void Display();
    void Hide();
    void AnmEvent_Loop();
    void AnmEvent_Stop();
    void Destruct();
    void Construct();
    void OnStartWorldSaving();
    void OnStartLocalSaving();
    void OnEndedWorldSave(bool IsSuccess);
    void OnEndedLocalSave(bool IsSuccess);
    void ExecuteUbergraph_WBP_AutoSave(int32 EntryPoint);
};

#endif
