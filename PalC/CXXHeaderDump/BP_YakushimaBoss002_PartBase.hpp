#ifndef UE4SS_SDK_BP_YakushimaBoss002_PartBase_HPP
#define UE4SS_SDK_BP_YakushimaBoss002_PartBase_HPP

class ABP_YakushimaBoss002_PartBase_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalUVEyeComponent* PalUVEye;
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;
    class UPalIndividualCharacterHandle* EyeHandle;
    bool IsBreak;
    FName CharacterID_Green;
    TSubclassOf<class AController> Controller_Green;

    FVector GetHPGaugeLocation();
    void IsRight(bool& IsHead);
    void IsLeft(bool& IsHead);
    void IsHead(bool& IsHead);
    void GetPartsType(FString& PartsType);
    void OnRep_IsBreak();
    void BndEvt__BP_YakushimaBoss002_R_DamageReactionComponent_K2Node_ComponentBoundEvent_0_OnPartBrokenDelegate__DelegateSignature(FPalDeadInfo AttackInfo);
    void SpawnEye(FPalInstanceID ID);
    void PlayDeathAnimation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveBeginPlay();
    void UpdateLocation();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_YakushimaBoss002_PartBase(int32 EntryPoint);
};

#endif
