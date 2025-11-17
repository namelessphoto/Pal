#ifndef UE4SS_SDK_BP_PalIncidentCamera_HPP
#define UE4SS_SDK_BP_PalIncidentCamera_HPP

class ABP_PalIncidentCamera_C : public AActor
{
    class UCameraComponent* Camera;
    class USceneComponent* DefaultSceneRoot;
    FTransform StartTransform;
    FTransform TargetTransform;
    double interpolSec;
    double ElapsedTime;

    void SetCameraTransform(FTransform Transform);
};

#endif
