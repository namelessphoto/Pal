#ifndef UE4SS_SDK_WBP_Ingame_Sleep_HPP
#define UE4SS_SDK_WBP_Ingame_Sleep_HPP

class UWBP_Ingame_Sleep_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_In;
    class UWBP_Ingame_Sleep_KeyGuide_C* Ingame_Sleep_KeyGuide_AllowSkipNight;
    class UWBP_Ingame_Sleep_KeyGuide_C* Ingame_Sleep_KeyGuide_Getup;
    class UWBP_Ingame_Sleep_KeyGuide_C* Ingame_Sleep_KeyGuide_PhotoMode;
    class UCanvasPanel* SleepingCanvasPanel;
    class UBP_PalTextBlock_C* Text_Num;

    void OnChangeSleepingPlayerNum(class UPalTimeManager* Manager);
    void SetSleepCount(int32 Count);
    bool IsActionSleepOnSide(UClass* Class);
    void SetupKeyGuide();
    void SetupMenu();
    void CloseMenu();
    void ExecuteUbergraph_WBP_Ingame_Sleep(int32 EntryPoint);
};

#endif
