#ifndef UE4SS_SDK_CommonLoadingScreen_HPP
#define UE4SS_SDK_CommonLoadingScreen_HPP

class ILoadingProcessInterface : public IInterface
{
};

class UCommonLoadingScreenSettings : public UDeveloperSettingsBackedByCVars
{
    FSoftClassPath LoadingScreenWidget;
    int32 LoadingScreenZOrder;
    float HoldLoadingScreenAdditionalSecs;
    float LoadingScreenHeartbeatHangDuration;
    float LogLoadingScreenHeartbeatInterval;
    bool LogLoadingScreenReasonEveryFrame;
    bool ForceLoadingScreenVisible;
    bool HoldLoadingScreenAdditionalSecsEvenInEditor;
    bool ForceTickLoadingScreenEvenInEditor;

};

class ULoadingProcessTask : public UObject
{

    void Unregister();
    void SetShowLoadingScreenReason(FString InReason);
    class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, FString ShowLoadingScreenReason);
};

class ULoadingScreenManager : public UGameInstanceSubsystem
{

    FString GetDebugReasonForShowingOrHidingLoadingScreen();
};

#endif
