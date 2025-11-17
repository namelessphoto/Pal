#ifndef UE4SS_SDK_BP_PalBossBattleManager_HPP
#define UE4SS_SDK_BP_PalBossBattleManager_HPP

class UBP_PalBossBattleManager_C : public UPalBossBattleManager
{
    FPointerToUberGraphFrame UberGraphFrame;

    void DisableSky(bool Activce, class APPSkyCreator* Sky);
    void DisableSkyCreator(bool Disable);
    void ExecuteUbergraph_BP_PalBossBattleManager(int32 EntryPoint);
};

#endif
