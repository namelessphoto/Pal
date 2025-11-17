#ifndef UE4SS_SDK_WBP_ExpeditionStatusWorldHUD_HPP
#define UE4SS_SDK_WBP_ExpeditionStatusWorldHUD_HPP

class UWBP_ExpeditionStatusWorldHUD_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalWork_Expedition_C* WBP_PalWork_Expedition;
    class UPalUIMapObjectCharacterTeamMissionModel* UIModel;
    class UPalMapObjectConcreteModelBase* ConcreteModel;
    FTimerHandle LocationCheckTimerHandle;
    bool bAlreadySetup;

    void OnTimer_LocationCheck();
    void OnChangedMissionState(const EPalMapObjectCharacterTeamMissionState LastState, const EPalMapObjectCharacterTeamMissionState CurrentState);
    void Setup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_ExpeditionStatusWorldHUD(int32 EntryPoint);
};

#endif
