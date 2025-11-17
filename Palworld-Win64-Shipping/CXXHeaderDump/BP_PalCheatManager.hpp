#ifndef UE4SS_SDK_BP_PalCheatManager_HPP
#define UE4SS_SDK_BP_PalCheatManager_HPP

class UBP_PalCheatManager_C : public UPalCheatManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* tempPlayer;

    void DebugItemWindow();
    void ToggleAllDebugInfo();
    void StartWildPalCombat();
    void TimeStopForBP();
    void OpenMultiBattleMapForBP();
    void OpenPrivateServerForBP();
    void SpectatorOnForBP();
    void ToggleRevision_BP();
    void HideTutorialQuest_BP();
    void ExecuteUbergraph_BP_PalCheatManager(int32 EntryPoint);
};

#endif
