#ifndef UE4SS_SDK_BP_PalCharacterMaterialVolume_HPP
#define UE4SS_SDK_BP_PalCharacterMaterialVolume_HPP

class ABP_PalCharacterMaterialVolume_C : public ABP_PickMainMeshVolume_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Base Emissive Intensity;
    double Base Color Intensity;
    double Light Affect Emissive Intensity;
    double Light Affect Emissive Min;
    double Light Affect Emissive Max;
    TSet<UMaterialInstanceDynamic*> Material Map;
    double Base Emissive Intensity_0;
    double Base Color Intensity_0;
    double Light Affect Emissive Intensity_0;
    double Light Affect Emissive Min_0;
    double Light Affect Emissive Max_0;

    void ForceInit();
    void ForceOn();
    void ForceOff();
    void ForceUpdate();
    void UpdateParameters();
    void SetParameters(class UMaterialInstanceDynamic* Material, double Light Affect Emissive Intensity, double Light Affect Emissive Min, double Light Affect Emissive Max, double Base Emissive Intensity, double Base Color Intensity);
    void EndOverlapPalLit(class UMaterialInstanceDynamic* Material);
    void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool materialSrc);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Force Update();
    void Force Off();
    void Force On();
    void Force Init();
    void ExecuteUbergraph_BP_PalCharacterMaterialVolume(int32 EntryPoint);
};

#endif
