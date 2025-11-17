#ifndef UE4SS_SDK_BP_NPC_Base_HPP
#define UE4SS_SDK_BP_NPC_Base_HPP

class ABP_NPC_Base_C : public ABP_NPC_NewBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalNPCTalkFlowComponent_C* BP_PalNPCTalkFlowComponent;
    class UBP_NPCInteractionComponent_C* BP_NPCInteractionComponent;
    class UPalFacialComponent* PalFacial;
    class UPalNavigationInvokerComponent* PalNavigationInvoker;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UPalShooterComponent* PalShooter;
    FBP_NPC_Base_COnDestoryEvent OnDestoryEvent;
    void OnDestoryEvent(class APalCharacter* Character);
    TSubclassOf<class UAnimInstance> AnimLayerClass;
    double TickInterval;
    bool DisableEXP;
    FName AIResponse;
    TSubclassOf<class UPalNPCWeaponGenerator> WeaponGeneratorClass;

    void SetMaterial(class UMaterialInstance* Material);
    void SetupInteraction();
    void DestoryWeapon();
    void CreateWeapon();
    void ReceiveBeginPlay();
    void カスタムイベント_0(class APalCharacter* InCharacter);
    void カスタムイベント_2(FPalDeadInfo DeadInfo);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void SetActive_Interact_ToAll(bool Active);
    void ReceiveTick(float DeltaSeconds);
    void UnregisterSwimEvent();
    void OnExitWater();
    void OnEnterWater();
    void RegisterSwimEvent();
    void ExecuteUbergraph_BP_NPC_Base(int32 EntryPoint);
    void OnDestoryEvent__DelegateSignature(class APalCharacter* Character);
};

#endif
