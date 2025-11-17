#ifndef UE4SS_SDK_BP_PalFishingComponent_HPP
#define UE4SS_SDK_BP_PalFishingComponent_HPP

class UBP_PalFishingComponent_C : public UPalFishingComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCutsceneActor* CutsceneActor;
    TSubclassOf<class APalCutsceneActor> TargetCutsceneActor;
    class UPalCutsceneComponent* CutsceneComponent;
    FVector CutsceneOffsetLocation;
    FPalFishingCutsceneInfo FishingCutsceneInfo;
    bool IsHideWeapon;
    FName flagName;
    class UPalShooterComponent* ShooterComponent;
    bool IsStartCutscene;

    void GetPlayerFootLocation(FVector SocketLocation, FVector& FloorLocation);
    void SetDisableChangeWeapon(bool isDisable);
    void CreateBindParameter(FPalFishingCutsceneInfo CutsceneInfo, class UPalCutsceneFishingBindParameter*& BindParameter);
    void SetHidePlayerUI(bool IsHide);
    void GetFadeOutParameter(class UPalHUDDispatchParameter_FadeWidget*& FadeParameter);
    void OnLoaded_E5B50C2441AF4766FDFF3BB4606F8B1A(UClass* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnStartCutscene(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnFinishedCutscene(bool bIsSkipped);
    void StartCutscene();
    void OnLoadedCutsceneInfo(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnEndAim();
    void OnAttachedFloorLargePal(FVector SocketLocation, FRotator SocketRotation);
    void OnStartAim(const TArray<FPalStaticItemIdAndNum>& BaitItemInfoList, int32 SelectedIndex);
    void ExecuteUbergraph_BP_PalFishingComponent(int32 EntryPoint);
};

#endif
