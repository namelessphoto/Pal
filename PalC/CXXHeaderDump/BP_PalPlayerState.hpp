#ifndef UE4SS_SDK_BP_PalPlayerState_HPP
#define UE4SS_SDK_BP_PalPlayerState_HPP

class ABP_PalPlayerState_C : public APalPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B20 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0B28 (size: 0x8)
    FTimerHandle WorldSaveTimer;                                                      // 0x0B30 (size: 0x8)
    FTimerHandle LocalSaveTimer;                                                      // 0x0B38 (size: 0x8)
    FTimerHandle HostLocalSaveTimer;                                                  // 0x0B40 (size: 0x8)
    bool SaveSuccessForRetryHostLocalWorldSave;                                       // 0x0B48 (size: 0x1)

    void RetryHostLocalWorldSave();
    void RetryProcessSaveReturn();
    void ProcessSaveReturn();
    void LoadTitleLevel(bool bIsSaveSuccess);
    void HostLocalWorldSave(bool SaveSuccess);
    void ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint);
}; // Size: 0xB49

#endif
