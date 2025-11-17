#ifndef UE4SS_SDK_BP_FluidImplementation_HPP
#define UE4SS_SDK_BP_FluidImplementation_HPP

class UBP_FluidImplementation_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_FluidController_C* FluidControllerReference;
    FName FluidControllerTag;
    FName FluidSurfaceTag;
    double TraceOffsetUp;
    double TraceOffsetDown;
    bool UsePerBoneTrace;
    bool ShowTraceDebug;
    double FluidDrawSize;
    double FluidMaxDrawIntensity;
    bool UseFrustumCulling;
    double FluidCullDistance;
    bool VelocityDeterminesIntensity;
    double VelocityDivideIntensity;
    FName FluidMeshTag;
    TArray<FName> Bones to Ignore;
    TArray<class UMeshComponent*> MeshComponents;
    double VelocityBegin;
    class UMaterialInstanceDynamic* DrawMaterialInstanceDynamic;

    void PerBoneDraw(FName Bone Name, class UMeshComponent*& Mesh Component);
    void FindFluidController();
    void FluidTrace(FVector Location, bool& Valid);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FluidImplementation(int32 EntryPoint);
};

#endif
