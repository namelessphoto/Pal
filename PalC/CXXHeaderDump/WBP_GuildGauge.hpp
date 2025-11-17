#ifndef UE4SS_SDK_WBP_GuildGauge_HPP
#define UE4SS_SDK_WBP_GuildGauge_HPP

class UWBP_GuildGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalProgressBar* PalProgressBar_Front_HP;
    class UPalProgressBar* PalProgressBar_Shield_Back;
    class UPalProgressBar* PalProgressBar_Shield_Front;
    class UProgressBar* ProgressBar_HP_Back;
    class USizeBox* SizeBox_Shield;
    class UBP_PalTextBlock_C* Text_GuildName;
    class UBP_PalTextBlock_C* Text_LvNum;
    class UBP_PalTextBlock_C* Text_PlayerName;
    class UWBP_GuildMemberGauge_C* WBP_GuildMemberGauge;
    TEnumAsByte<E_PalUIGuildHPGaugeDisplayType> CachedDisplayType;
    class UPalUIDelayGaugeCalculator* DelayGauge;
    class UPalUIDelayGaugeCalculator* ShieldDelayGauge;
    class UMaterialInstanceDynamic* FriendColorMat;
    class UMaterialInstanceDynamic* EnemyColorMat;

    void Set Shield(FFixedPoint64 NowSh, FFixedPoint64 MaxSh);
    void SetDying(class UBP_Status_Dying_C* DyingStatus, bool Enable);
    void SetGuildName(FString GuildName, FGuid GuildNameModifierPlayerUId);
    void SetLevel(int32 Level);
    void SetHP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void Set Display Type(TEnumAsByte<E_PalUIGuildHPGaugeDisplayType> NewDisplayType);
    void SetNickName(FString NewNickName, TSoftObjectPtr<UPalIndividualCharacterHandle> Handle);
    void UpdateForTick(double DeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_GuildGauge(int32 EntryPoint);
};

#endif
