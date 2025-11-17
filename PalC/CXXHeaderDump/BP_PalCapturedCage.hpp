#ifndef UE4SS_SDK_BP_PalCapturedCage_HPP
#define UE4SS_SDK_BP_PalCapturedCage_HPP

class ABP_PalCapturedCage_C : public APalCapturedCage
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box_PlayerOnly;
    class UNiagaraComponent* Niagara;
    class UBoxComponent* DoorBoxCollision;
    class UStaticMeshComponent* LockMesh;
    class UStaticMeshComponent* DoorMesh;
    class UStaticMeshComponent* BodyMash;
    class UBoxComponent* Box5;
    class UBoxComponent* Box4;
    class UBoxComponent* box3;
    class UBoxComponent* box2;
    class UBoxComponent* box1;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class USceneComponent* DefaultSceneRoot;
    bool Accessed;
    FTimerHandle OpenAnimeTimerHandle;
    double DoorOpenTimer;
    double Const_DoorOpenSpeed;
    class UCurveFloat* Const_DoorOpenCurve;
    EPalActionType PlayerActionType;
    FBP_PalCapturedCage_COnCaptured OnCaptured;
    void OnCaptured();
    double DoorFinishAngle;

    void OpenDoor_BP(bool bIsAnimSkip);
    void SetupSpawnPal();
    FName GetCampSpawnerName();
    void Disable Lock Mesh Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
    void Enable Lock Mesh Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
    void OnFinishRescue(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void StopPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void StartPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void DoorOpenAnimeLoop();
    void PlayDoorOpenAnime();
    EPalInteractiveObjectIndicatorType GetIndicatorType();
    void ReceiveBeginPlay();
    void OpenDoor();
    void ResetCageByOutside_BP();
    void FullOpenDoor();
    void StartCaptureEffect_ServerBP(class APalPlayerCharacter* Player);
    void ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint);
    void OnCaptured__DelegateSignature();
};

#endif
