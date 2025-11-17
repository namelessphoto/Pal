#ifndef UE4SS_SDK_BP_CutsceneMonster_Fishing_HPP
#define UE4SS_SDK_BP_CutsceneMonster_Fishing_HPP

class ABP_CutsceneMonster_Fishing_C : public ABP_CutsceneCharacterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalFacialComponent* PalFacial;
    class USkeletalMeshComponent* SkeletalMesh;
    FBP_CutsceneMonster_Fishing_COnInitialized OnInitialized;
    void OnInitialized();
    class UNiagaraComponent* WetEffect;
    FName CenterSocketName;

    void SetupMeshScale(EPalFishingPlayerMotionType PlayerMotionType, FVector MeshScale);
    void Set Enable Pal(bool IsEnable);
    void OnNotifyEnd_8A421197486C92EBC2C5B2857357BBCB(FName NotifyName);
    void OnNotifyBegin_8A421197486C92EBC2C5B2857357BBCB(FName NotifyName);
    void OnInterrupted_8A421197486C92EBC2C5B2857357BBCB(FName NotifyName);
    void OnBlendOut_8A421197486C92EBC2C5B2857357BBCB(FName NotifyName);
    void OnCompleted_8A421197486C92EBC2C5B2857357BBCB(FName NotifyName);
    void SetupPal(FPalFishingCutsceneInfo Info);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_CutsceneMonster_Fishing(int32 EntryPoint);
    void OnInitialized__DelegateSignature();
};

#endif
