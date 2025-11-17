#ifndef UE4SS_SDK_BP_WaterfallTool_HPP
#define UE4SS_SDK_BP_WaterfallTool_HPP

class ABP_WaterfallTool_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalAmbientSoundLineComponent* PalAmbientSoundLine;
    class UParticleSystemComponent* Mist;
    class UParticleSystemComponent* BottomSplash;
    class UParticleSystemComponent* TopSplash;
    class USplineComponent* Waterfall_Spline;
    bool Ground Check;
    double Easy Scale;
    FLinearColor Water Color;
    double Foam Brightness;
    double Opacity;
    double Opacity Edge Fade;
    double Flow Speed;
    double Start Fade;
    TArray<FAdditionalCascades> Additional Waterfalls;
    TArray<class UParticleSystemComponent*> Additional Top Splash;
    TArray<class UParticleSystemComponent*> Additional Bottom Splash;
    TArray<class UParticleSystemComponent*> Additional Mist;
    TArray<class USplineComponent*> Adds Waterfall Spline Comps;
    double End Fade;
    double Edge Fade;
    bool Object Detection;
    double Object Detection Size;
    double Object Detection Strength;
    double Object Detection Smoothness;
    TArray<class AActor*> Actors to Ignore;

    void CheckIntervalByDistance();
    void Setup Waterfall Particles();
    void Setup Adds Waterfall Particles();
    void Setup Waterfall Particle Parameters();
    void Setup Adds Waterfall Particle Parameters();
    void Set Adds Waterfall Particle Effect Location(TArray<FAdditionalCascades>& Cascade Splines Data, TArray<class UParticleSystemComponent*>& Cascade Top Splash, TArray<class UParticleSystemComponent*>& Cascade Bottom Splash, TArray<class UParticleSystemComponent*>& Cascade Mist, TArray<class USplineComponent*>& Cascade Spline Comps);
    void Do Waterfall Trace(class USplineComponent* Spline Input, double Scale, TArray<class AActor*>& Actors to Ignore);
    void Check Spline Input Keys(TArray<FAdditionalCascades>& Cascades In, bool& passed);
    void Setup Spline Mesh(class USplineComponent* Spline Comp, double Scale);
    void Set Waterfall Particle Effect Location();
    void Setup Material Parameters(class UMaterialInstanceDynamic* Material, int32 Current Index, class USplineComponent* Spline);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WaterfallTool(int32 EntryPoint);
};

#endif
