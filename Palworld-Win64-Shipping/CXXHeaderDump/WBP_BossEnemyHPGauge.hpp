#ifndef UE4SS_SDK_WBP_BossEnemyHPGauge_HPP
#define UE4SS_SDK_WBP_BossEnemyHPGauge_HPP

class UWBP_BossEnemyHPGauge_C : public UPalUICharacterHPGaugeBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Close;
    class UWBP_IngameBossHP_C* WBP_IngameBossHP;
    class APalCharacter* TargetCharacter;
    class UPalIndividualCharacterParameter* TargetIndividualParameter;
    FWBP_BossEnemyHPGauge_COnDead OnDead;
    void OnDead(class APalCharacter* TargetCharacter);
    bool isAlreadyDead;

    void OnUpdateElement(EPalElementType type1, EPalElementType type2);
    void On Update Level(int32 addLevel, int32 nowLevel);
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnRequestClose();
    void UpdateVisibility();
    void UpdateText();
    void SetupEvents();
    void SetTargetCharacter(class APalCharacter* TargetCharacter);
    void Finished_10F7592E48B01E3F065E49BC1224338C();
    void AnmEvent_Close();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_BossEnemyHPGauge(int32 EntryPoint);
    void OnDead__DelegateSignature(class APalCharacter* TargetCharacter);
};

#endif
