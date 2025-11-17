#ifndef UE4SS_SDK_BP_PalMonsterCaptureSet_HPP
#define UE4SS_SDK_BP_PalMonsterCaptureSet_HPP

class ABP_PalMonsterCaptureSet_C : public APalUIInframeRenderer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh_Weapon;
    class URectLightComponent* RectLight;
    class UPointLightComponent* PointLight_1;
    class UPointLightComponent* PointLight_2;
    class UStaticMeshComponent* Cube3;
    class UStaticMeshComponent* Cube5;
    class UStaticMeshComponent* Cube4;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* Cube1;
    class UStaticMeshComponent* Cube2;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class USceneComponent* DefaultSceneRoot;
    FRotator TargetRotator;
    FBP_PalMonsterCaptureSet_COnCompletedSetup OnCompletedSetup;
    void OnCompletedSetup();
    FTimerHandle delayHandle;
    FRotator DefaultRotator;
    FName nextRequestedPalID;
    FName LoadingPalID;
    bool IsLoading;
    double RotateInterpolationRate;
    TMap<class UMaterialInterface*, class UMaterialInterface*> OverrideMaterialMap;
    FName NowDisplayingPalID;
    TMap<class FName, class USkeletalMesh*> WeaponSkeletonMeshMap;
    TSubclassOf<class APalCharacter> LoadedCharacterClass;
    FName LoadingOriginalPalID;
    TMap<class FName, class TSoftClassPtr<AActor>> UniqueCaptureActorMap;
    class AActor* UniqueCaptureActor;
    TMap<class TSoftClassPtr<AActor>, class TSoftClassPtr<AActor>> UniqueCaptureActorMap_FromSkin;

    void Request Capture from PalSkin(FName PalRowName, TSoftClassPtr<APalCharacter> SkinClass);
    void GetCaptureCharacterID(FName CharacterID, FName& BPClassName);
    void GetNowDisplayingPalID(FName& PalId);
    void OverrideMaterial(class USkeletalMeshComponent* TargetSkeletalMesh);
    void ResetRotator();
    void AddRotation(FRotator Rotator);
    void CancelDelayHandle();
    void DelayCompleteSetup();
    void SetupDelayHandle();
    void On Loaded Pal Class(TSubclassOf<class APalCharacter> NewParam);
    void SetupSkeletalMesh(class USkeletalMesh* Mesh);
    void RequestCaptureFromPalID(FName PalRowName);
    void Reset();
    void OnLoaded_47E3700548CBE24684940690F7B5FBD1(UClass* Loaded);
    void ReceiveBeginPlay();
    void OnRequestLoadPalClass(TSoftClassPtr<APalCharacter> NewParam);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_PalMonsterCaptureSet(int32 EntryPoint);
    void OnCompletedSetup__DelegateSignature();
};

#endif
