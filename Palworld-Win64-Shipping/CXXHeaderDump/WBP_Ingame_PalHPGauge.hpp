#ifndef UE4SS_SDK_WBP_Ingame_PalHPGauge_HPP
#define UE4SS_SDK_WBP_Ingame_PalHPGauge_HPP

class UWBP_Ingame_PalHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_KeyGuideAttentionLOOP;
    class UWidgetAnimation* Anm_PalActive;
    class UWidgetAnimation* Anm_HoldOut;
    class UWidgetAnimation* Anm_HoldIn;
    class UWidgetAnimation* Anm_PalSelect_R;
    class UWidgetAnimation* Anm_PalSelect_L;
    class UBP_PalTextBlock_C* BPPalTextBlock_SkillCT;
    class UCanvasPanel* Canvas_HP;
    class UCanvasPanel* Canvas_PalStatus;
    class UCanvasPanel* Canvas_Slot_Center;
    class UCanvasPanel* Canvas_SlotL1;
    class UCanvasPanel* Canvas_SlotL2;
    class UCanvasPanel* Canvas_SlotR1;
    class UCanvasPanel* Canvas_SlotR2;
    class UImage* Image_ActiveCircle_Center;
    class UImage* Image_ActiveCircle_L1;
    class UImage* Image_ActiveCircle_L2;
    class UImage* Image_ActiveCircle_R1;
    class UImage* Image_ActiveCircle_R2;
    class UOverlay* Overlay_SkillCT;
    class UProgressBar* ProgressBar_HPGauge;
    class UProgressBar* ProgressBar_HPGauge_Back;
    class UBP_PalTextBlock_C* Text_LvValue;
    class UBP_PalTextBlock_C* Text_PalName;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_L;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_L2;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_R;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_R2;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_00;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_01;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Single;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_Decrement_1;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_Increment;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ThrowPal;
    class UPalUIDelayGaugeCalculator* DelayHPGauge;
    int32 CachedActivatedOtomoID;
    int32 CachedSelectedOtomoIndex;
    bool IsEquipedOtomoThrowWeapon;
    bool IsThrowPalActiveAnimeFinished;
    class UPalPartnerSkillParameterComponent* CurrentPartnerSkillComponent;

    void UnbindPartnerSkill();
    void BindPartnerSkillCTTime(class APalCharacter* Character);
    void Update Level Binded(int32 NewLevel);
    void GetPrevOtomoSlot(class UPalIndividualCharacterSlot*& Slot, bool& IsEmpty);
    void GetNextOtomoSlot(class UPalIndividualCharacterSlot*& Slot, bool& IsEmpty);
    void OnDecrementedOtomo_FromController();
    void OnIncrementedOtomo_FromController();
    void OnStartAim();
    void OnEndAim();
    void OnChangedWeapon(class APalWeaponBase* Weapon);
    void OnDeactivatedOtomo();
    void OnActivatedOtomo();
    void UpdateNickName_Binded(FString NewNickName);
    void UpdateHP_Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void On Update Otomo Index();
    void Update Otomo List();
    void On Update Otomo Slot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void Setup();
    void Finished_1811421C440B0864689BD0B33F2F9D51();
    void Finished_9B82422440F7C97D278AB2B15E642EE3();
    void Finished_1F59E19C478A6C6286266A9C072DA24B();
    void AnmEvent_OtomoActive();
    void AnmEvent_OtomoDeactivate();
    void AnmEvent_NextOtomo();
    void AnmEvent_PrevOtomo();
    void AnmEvent_ThrowActivate();
    void AnmEvent_ThrowOtomoDeactive();
    void AnmEvent_EnableSummonPalGuide(bool EnableFlag);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void CustomEvent(int32 addLevel, int32 nowLevel);
    void OnSetup_AfterCreatedPlayer();
    void OnCTTimeUpdate(FFixedPoint Now, FFixedPoint Max);
    void OnCoolStart();
    void OnCoolEnd();
    void ExecuteUbergraph_WBP_Ingame_PalHPGauge(int32 EntryPoint);
};

#endif
