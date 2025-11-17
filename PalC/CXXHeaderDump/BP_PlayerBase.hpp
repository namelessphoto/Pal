#ifndef UE4SS_SDK_BP_PlayerBase_HPP
#define UE4SS_SDK_BP_PlayerBase_HPP

class ABP_PlayerBase_C : public APalPlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F20 (size: 0x8)
    class UPalPassiveSkillInvokerComponent* PalPassiveSkillInvoker;                   // 0x0F28 (size: 0x8)
    class UCapsuleComponent* DeadColllision;                                          // 0x0F30 (size: 0x8)
    class UBP_PalTimerPointLightComponent_C* PlayerLight;                             // 0x0F38 (size: 0x8)
    class UPalRiderComponent* Rider Component;                                        // 0x0F40 (size: 0x8)
    bool bIsInCapturedCage;                                                           // 0x0F48 (size: 0x1)
    class ABP_LampBase_C* Lantern;                                                    // 0x0F50 (size: 0x8)
    TSoftClassPtr<APalPlayerLampBase> WaitingLampClass;                               // 0x0F58 (size: 0x30)
    bool bIsLoadingLamp;                                                              // 0x0F88 (size: 0x1)

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
}; // Size: 0xF89

#endif
