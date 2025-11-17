#ifndef UE4SS_SDK_BP_CutsceneMonster_Fishing_HPP
#define UE4SS_SDK_BP_CutsceneMonster_Fishing_HPP

class ABP_CutsceneMonster_Fishing_C : public ABP_CutsceneCharacterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02B8 (size: 0x8)
    FBP_CutsceneMonster_Fishing_COnInitialized OnInitialized;                         // 0x02C0 (size: 0x10)
    void OnInitialized();
    class UNiagaraComponent* WetEffect;                                               // 0x02D0 (size: 0x8)
    FName CenterSocketName;                                                           // 0x02D8 (size: 0x8)

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
}; // Size: 0x2E0

#endif
