#ifndef UE4SS_SDK_BP_Player_Female_HPP
#define UE4SS_SDK_BP_Player_Female_HPP

class ABP_Player_Female_C : public ABP_PlayerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalFishingComponent_C* BP_PalFishingComponent;
    class UPalSkeletalMeshComponent* HairAttachAccessory;
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;
    class UPalBodyTemperatureComponent* PalBodyTemperature;
    class UBP_GliderComponent_C* BP_GliderComponent;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UPalSkeletalMeshComponent* HairMesh;
    class UPalSkeletalMeshComponent* HeadMesh;
    class UBP_PalClimbingComponent_C* BP_PalClimbingComponent;
    class UPalFacialComponent* PalFacial;
    class UBP_FluidImplementation_C* BP_FluidImplementation;
    class UBP_PlayerSoundEmitterComponent_C* BP_PlayerSoundEmitterComponent;
    class UNiagaraComponent* SlidingParticle;
    bool UsePhysicalBone;
    class UNiagaraSystem* SlidingSmokeNiagara;
    class UNiagaraSystem* JumpNiagara;
    FName SoundID_Sliding;
    class ABP_Lamp_C* Lamp;
    class UNiagaraSystem* SlidingSmokeNiagara_Snow;
    class UNiagaraSystem* JumpNiagara_Snow;
    class UBP_PalLocalPlayerSystemSound_C* LocalPlayerSound;
    class UNiagaraSystem* DoubleJumpNiagara;

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
};

#endif
