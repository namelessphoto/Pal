#ifndef UE4SS_SDK_BP_PalPlayerState_HPP
#define UE4SS_SDK_BP_PalPlayerState_HPP

class ABP_PalPlayerState_C : public APalPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FTimerHandle WorldSaveTimer;
    FTimerHandle LocalSaveTimer;
    FTimerHandle HostLocalSaveTimer;
    bool SaveSuccessForRetryHostLocalWorldSave;

    void RetryHostLocalWorldSave();
    void RetryProcessSaveReturn();
    void ProcessSaveReturn();
    void LoadTitleLevel(bool bIsSaveSuccess);
    void HostLocalWorldSave(bool SaveSuccess);
    void ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint);
};

#endif
