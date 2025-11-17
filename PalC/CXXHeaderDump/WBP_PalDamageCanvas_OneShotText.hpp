#ifndef UE4SS_SDK_WBP_PalDamageCanvas_OneShotText_HPP
#define UE4SS_SDK_WBP_PalDamageCanvas_OneShotText_HPP

class UWBP_PalDamageCanvas_OneShotText_C : public UPalDamageDisplayCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* CanvasPanel_0;
    int32 Damage;
    FVector Hit Location;
    double DisplayTime;
    float DamageTextDisplayLength;
    double DamageTextScale;
    int32 MaxDisplayNum;

    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void IsEquipAttacker(class AActor* Attacker, bool& IsEquip);
    void CalcLengthToPlayer(FVector HitLocation, double& Length);
    void CalcTargetLocation(FPalDamageInfo DamageInfo, class AActor* Defender, FVector& Location);
    void Add New Damage Text(FPalDamageInfo DamageInfo, class AActor* Defender);
    void CreateDamageWidget(class UPalUIDamageTextBase*& createdWdiget);
    void CalcDamageTextType(FPalDamageInfo DamageInfo, class AActor* Defender, double DamageRate, int32 weakCount, EPalDamageTextType& textType);
    void OnSetup();
    void Destruct();
    void AddDamageTextEvent(const FPalDamageInfo& DamageInfo, class AActor* Defender);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint);
};

#endif
