#ifndef UE4SS_SDK_BP_PlayerBase_HPP
#define UE4SS_SDK_BP_PlayerBase_HPP

class ABP_PlayerBase_C : public APalPlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalPassiveSkillInvokerComponent* PalPassiveSkillInvoker;
    class UCapsuleComponent* DeadColllision;
    class UBP_PalTimerPointLightComponent_C* PlayerLight;
    class UPalRiderComponent* Rider Component;
    bool bIsInCapturedCage;
    class ABP_LampBase_C* Lantern;
    TSoftClassPtr<APalPlayerLampBase> WaitingLampClass;
    bool bIsLoadingLamp;

    void CreateLanternInternal(TSubclassOf<class ABP_LampBase_C> LampClass);
    void UpdateLanternSetting(EPalPlayerEquipLantern NewEquipType);
    void ClearLantern();
    void CreateLantern();
    void SetPlayerLightEnable(bool IsEnable);
    void OnLoaded_02DA547E4C37CAA237537F82C5DB3211(class UObject* Loaded);
    void OnLoaded_E0CBCA984BBA2F05633BE88C8917EC3D(UClass* Loaded);
    void RegisterSwimEvent();
    void OnEnterWater();
    void OnExitWater();
    void UnregisterSwimEvent();
    void OnUpdateAboveWater(bool IsAboveWater);
    void BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnCompleteInitializeParameterDelegate_イベント_0(class APalCharacter* InCharacter);
    void ReceiveBeginPlay();
    void OnUpdateLevelDelegate_イベント_0(int32 addLevel, int32 nowLevel);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void LoadLampClassAsync(TSoftClassPtr<APalPlayerLampBase> LampClass);
    void ExecuteUbergraph_BP_PlayerBase(int32 EntryPoint);
};

#endif
