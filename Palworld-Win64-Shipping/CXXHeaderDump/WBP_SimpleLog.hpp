#ifndef UE4SS_SDK_WBP_SimpleLog_HPP
#define UE4SS_SDK_WBP_SimpleLog_HPP

class UWBP_SimpleLog_C : public UPalLogWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* SlideIn;
    class UWBP_ItemGet_C* WBP_ItemGet;
    double ElapsedTimeBySpawn;
    double SelfDestroyTime;
    int32 State;

    void OverrideBgColor(EPalLogContentToneType ToneType);
    void OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A(class UObject* Loaded);
    void OnFinishOpen();
    void OnFinishClose();
    void SetLogText(const FText& InText);
    void RequestInAnime();
    void RequestOutAnime();
    void RequestLoadIconTexture(const TSoftObjectPtr<UTexture2D>& softTexturePtr);
    void OnInitialized();
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    void ExecuteUbergraph_WBP_SimpleLog(int32 EntryPoint);
};

#endif
