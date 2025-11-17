#ifndef UE4SS_SDK_BP_Player_Female_HPP
#define UE4SS_SDK_BP_Player_Female_HPP

class ABP_Player_Female_C : public ABP_PlayerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F90 (size: 0x8)
    class UBP_PalFishingComponent_C* BP_PalFishingComponent;                          // 0x0F98 (size: 0x8)
    class UPalSkeletalMeshComponent* HairAttachAccessory;                             // 0x0FA0 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0FA8 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0FB0 (size: 0x8)
    class UPalBodyTemperatureComponent* PalBodyTemperature;                           // 0x0FB8 (size: 0x8)
    class UBP_GliderComponent_C* BP_GliderComponent;                                  // 0x0FC0 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0FC8 (size: 0x8)
    class UPalSkeletalMeshComponent* HairMesh;                                        // 0x0FD0 (size: 0x8)
    class UPalSkeletalMeshComponent* HeadMesh;                                        // 0x0FD8 (size: 0x8)
    class UBP_PalClimbingComponent_C* BP_PalClimbingComponent;                        // 0x0FE0 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0FE8 (size: 0x8)
    class UBP_FluidImplementation_C* BP_FluidImplementation;                          // 0x0FF0 (size: 0x8)
    class UBP_PlayerSoundEmitterComponent_C* BP_PlayerSoundEmitterComponent;          // 0x0FF8 (size: 0x8)
    class UNiagaraComponent* SlidingParticle;                                         // 0x1000 (size: 0x8)
    bool UsePhysicalBone;                                                             // 0x1008 (size: 0x1)
    class UNiagaraSystem* SlidingSmokeNiagara;                                        // 0x1010 (size: 0x8)
    class UNiagaraSystem* JumpNiagara;                                                // 0x1018 (size: 0x8)
    FName SoundID_Sliding;                                                            // 0x1020 (size: 0x8)
    class ABP_Lamp_C* Lamp;                                                           // 0x1028 (size: 0x8)
    class UNiagaraSystem* SlidingSmokeNiagara_Snow;                                   // 0x1030 (size: 0x8)
    class UNiagaraSystem* JumpNiagara_Snow;                                           // 0x1038 (size: 0x8)
    class UBP_PalLocalPlayerSystemSound_C* LocalPlayerSound;                          // 0x1040 (size: 0x8)
    class UNiagaraSystem* DoubleJumpNiagara;                                          // 0x1048 (size: 0x8)

    class USkeletalMeshComponent* GetHeadMesh();
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    class USkeletalMeshComponent* GetOverrideFaceMesh();
    void OnUpdateSliding();
    void OnSlidingEnd();
    void OnSlidingBegin();
    void CreatePoliceSpawner();
    void CreateLamp();
    void OnLoaded_CD204E62480922149D33F2914AD3807A(class UObject* Loaded);
    void OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4(class UObject* Loaded);
    void ReceiveBeginPlay();
    void BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature(class UPalCharacterMovementComponent* Component, bool IsInSliding);
    void OnJumped();
    void ReceiveTick(float DeltaSeconds);
    void LoadAsyncAsset();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void BndEvt__BP_Player_Female_BP_GliderComponent_K2Node_ComponentBoundEvent_1_OnStartGliding__DelegateSignature();
    void OnInitialized(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_Player_Female(int32 EntryPoint);
}; // Size: 0x1050

#endif
