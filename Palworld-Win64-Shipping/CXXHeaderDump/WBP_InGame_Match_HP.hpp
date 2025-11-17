#ifndef UE4SS_SDK_WBP_InGame_Match_HP_HPP
#define UE4SS_SDK_WBP_InGame_Match_HP_HPP

class UWBP_InGame_Match_HP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ProgressBar_HPGauge_Player;
    class UProgressBar* ProgressBar_HPGauge_Player_Back;
    class UProgressBar* ProgressBar_HPGauge_Rival;
    class UProgressBar* ProgressBar_HPGauge_Rival_Back;
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Player_0;
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Player_1;
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Player_2;
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Rival_0;
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Rival_1;
    class UWBP_InGame_Match_HPPal_C* WBP_InGame_Match_HPPal_Rival_2;
    class UPalUIDelayGaugeCalculator* PlayerHPGauge;
    class UPalUIDelayGaugeCalculator* RivalHPGauge;
    TArray<class UWBP_InGame_Match_HPPal_C*> PlayerPals;
    TArray<class UWBP_InGame_Match_HPPal_C*> RivalPals;
    class UPalIndividualCharacterParameter* Player Individual Parameter;
    class UPalIndividualCharacterParameter* Rival Individual Parameter;

    void Setup(EPalArenaPlayerIndex LocalPlayerIndex, const TMap<class EPalArenaPlayerIndex, class FPalArenaPlayerInfo>& PlayerInfoMap, int32 MaxBattleTime);
    void Update Rival HP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void UpdatePlayerHP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void OnInitialized();
    void Unbind();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_InGame_Match_HP(int32 EntryPoint);
};

#endif
