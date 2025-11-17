#ifndef UE4SS_SDK_WBP_BlinkedLog_HPP
#define UE4SS_SDK_WBP_BlinkedLog_HPP

class UWBP_BlinkedLog_C : public UPalLogWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Blink;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Image_Effect;
    class UImage* Image_Effect_1;
    class UWBP_ItemGet_C* WBP_ItemGet;
    double ElapsedTimeBySpawn;
    double SelfDestroyTime;
    int32 State;
    class UMaterialInstanceDynamic* effectMat;
    double totalTime;
    bool isReverse;

    void OverrideBgColor(EPalLogContentToneType ToneType);
    void OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1(class UObject* Loaded);
    void OnFinishOpen();
    void OnFinishClose();
    void SetLogText(const FText& InText);
    void RequestInAnime();
    void RequestOutAnime();
    void RequestLoadIconTexture(const TSoftObjectPtr<UTexture2D>& softTexturePtr);
    void OnInitialized();
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_BlinkedLog(int32 EntryPoint);
};

#endif
