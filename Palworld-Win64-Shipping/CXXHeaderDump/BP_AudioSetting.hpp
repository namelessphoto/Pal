#ifndef UE4SS_SDK_BP_AudioSetting_HPP
#define UE4SS_SDK_BP_AudioSetting_HPP

class UBP_AudioSetting_C : public UPalAudioSettingSystem
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<EPalAudioBus, double> BusVolumes;
    TMap<EPalAudioBus, double> BusVolumes_Debug;
    TMap<class EPalAudioBus, class bool> BusMute;
    TMap<class EPalAudioBus, class bool> BusMute_Debug;
    TMap<class EPalAudioBus, class FFloatContainer_FloatPair> BusVolumes_0;

    bool IsAudioBusMute(EPalAudioBus AudioBus);
    void SetAudioBusMute_Impl(EPalAudioBus AudioBus, bool IsMute);
    void Set Audio Bus Volume Impl(EPalAudioBus AudioBus, FName Key, double Volume);
    void UpdateAudioVolume(EPalAudioBus AudioBus);
    void Initialize_Impl();
    void IsMuteFromDebugSetting(EPalAudioBus AudioBus, bool& IsMute);
    void GetVolumeFromDebugSetting(EPalAudioBus AudioBus, double& Volume);
    void IsMuteFromMap(EPalAudioBus AuduiBus, TMap<class EPalAudioBus, class bool> ValMap, bool& Find, bool& IsMute);
    void GetVolumeFromMap(EPalAudioBus AuduiBus, TMap<EPalAudioBus, double> ValMap, bool& Find, double& Volume);
    void SetMuteToMap(EPalAudioBus AudioBus, bool IsMute, TMap<class EPalAudioBus, class bool>& MuteMap);
    void SetVolumeToMap(EPalAudioBus AudioBus, double Volume, TMap<EPalAudioBus, double>& ValMap);
    void Initialize();
    void Tick_BP(float DeltaTime);
    void SetAudioBusMute(EPalAudioBus AudioBus, bool IsMute);
    void SetAudioBusVolume(EPalAudioBus AudioBus, const FName& Key, float Volume);
    void ExecuteUbergraph_BP_AudioSetting(int32 EntryPoint);
};

#endif
