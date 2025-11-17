#ifndef UE4SS_SDK_BP_PalCaptureJudgeObject_HPP
#define UE4SS_SDK_BP_PalCaptureJudgeObject_HPP

class ABP_PalCaptureJudgeObject_C : public APalCaptureJudgeObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    bool IsReturnOwner;
    double ReturnSpeed;

    void ReturnOwnerMovement(double DeltaTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnFailedByMP(const class APalCharacter* Character, FCaptureResult Result);
    void OnFailedFinish();
    void OnCaptureSuccess(const class APalCharacter* Character, FCaptureResult Result);
    void OnFailedByTest(const class APalCharacter* Character, FCaptureResult Result);
    void OnSuccessFinish();
    void ExecuteUbergraph_BP_PalCaptureJudgeObject(int32 EntryPoint);
};

#endif
