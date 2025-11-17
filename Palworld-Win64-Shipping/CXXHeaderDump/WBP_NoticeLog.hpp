#ifndef UE4SS_SDK_WBP_NoticeLog_HPP
#define UE4SS_SDK_WBP_NoticeLog_HPP

class UWBP_NoticeLog_C : public UPalLogWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_Notice_C* WBP_Notice;
    EPalLogContentToneType logToneType;

    void Close_Internal();
    void Open_Internal();
    void OnLoaded_19AB6838498B19451FE6AEAD31DEA803(class UObject* Loaded);
    void RequestLoadIconTexture(const TSoftObjectPtr<UTexture2D>& softTexturePtr);
    void SetLogText(const FText& InText);
    void RequestInAnime();
    void OnFinished();
    void RequestOutAnime();
    void OnFinishedClose();
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    void OnInitialized();
    void ExecuteUbergraph_WBP_NoticeLog(int32 EntryPoint);
};

#endif
