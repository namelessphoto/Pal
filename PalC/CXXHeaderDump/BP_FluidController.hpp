#ifndef UE4SS_SDK_BP_FluidController_HPP
#define UE4SS_SDK_BP_FluidController_HPP

class ABP_FluidController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Icon;
    int32 CurrentRT;
    double Time;
    class UMaterialInstanceDynamic* FluidTransfer;
    class UMaterialInstanceDynamic* FluidSimulation;
    class UMaterialInstanceDynamic* NormalSimulation;
    bool EnableSimulation;
    double FluidUpdateRate;
    double FluidTravelSpeed;
    double FluidDampening;
    class UTextureRenderTarget2D* Height_0;
    class UTextureRenderTarget2D* Height_1;
    class UTextureRenderTarget2D* Height_2;
    int32 RenderTargetSize;
    class UTextureRenderTarget2D* FluidOut;
    class UTextureRenderTarget2D* FluidOutNormal;
    double NormalIntensity;

    void GetRT_Height(int32 Index, class UTextureRenderTarget2D*& RenderTarget);
    void CreateMaterials();
    void ClearRenderTargets();
    void GetRT(int32 Index, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D*& RenderTarget);
    void GetPreviousRT(int32 CurrentRTIndex, int32 FramesOld, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D*& RenderTargetOut);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_FluidController(int32 EntryPoint);
};

#endif
