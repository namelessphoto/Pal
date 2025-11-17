#ifndef UE4SS_SDK_BP_PettingCamera_HPP
#define UE4SS_SDK_BP_PettingCamera_HPP

class ABP_PettingCamera_C : public AActor
{
    class UPalCharacterCameraComponent* PalCharacterCamera;
    class USpringArmComponent* SpringArm;
    class USceneComponent* DefaultSceneRoot;

    void EndPettingCamera(class APlayerController* PlayerController);
    void StartPettingCamera(class APlayerController* PlayerController);
    void UpdatePettingCameraOffset(class APlayerController* PlayerController, class AActor* TargetPal);
};

#endif
