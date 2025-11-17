#ifndef UE4SS_SDK_WBP_PlayerHPGauge_HPP
#define UE4SS_SDK_WBP_PlayerHPGauge_HPP

class UWBP_PlayerHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_GuildGauge_C* WBP_GuildGauge;
    float ImportedSphereRadius;
    FVector2D DrawOffset;
    FTimerHandle CheckActorTimerHandle;
    FTimerHandle CheckDisplayTypeTimerHandle;
    class UBP_Status_Dying_C* CachedDyingStatus;
    FWBP_PlayerHPGauge_COnDelayClose OnDelayClose;
    void OnDelayClose(class UWidget* Widget);

    void OnDyingEnd();
    void On Update Shield Binded(FFixedPoint64 NowShield, FFixedPoint64 nowMaxShield);
    void SetupDying();
    void UpdateWidgetPosition();
    void OnUpdateLevel_Binded(int32 NewLevel);
    void On Update HP Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetupByActor();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateForTick(double DeltaTime);
    void OnUpdateNickName_Binded(FString NewNickName);
    void On Timer Event Check Guild();
    void OnTimerEvent_CheckActor();
    void OnInitialized();
    void Destruct();
    void DelayClose();
    void ExecuteUbergraph_WBP_PlayerHPGauge(int32 EntryPoint);
    void OnDelayClose__DelegateSignature(class UWidget* Widget);
};

#endif
