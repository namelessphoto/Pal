#ifndef UE4SS_SDK_BP_Lamp_HPP
#define UE4SS_SDK_BP_Lamp_HPP

class ABP_Lamp_C : public ABP_LampBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;
    class UStaticMeshComponent* SM_Lantern_Flames;
    class UStaticMeshComponent* SM_lamp_01;

    void SetLightEnable(bool IsEnable);
    void OnChangedLampEnable(bool bIsEnable);
    void ExecuteUbergraph_BP_Lamp(int32 EntryPoint);
};

#endif
