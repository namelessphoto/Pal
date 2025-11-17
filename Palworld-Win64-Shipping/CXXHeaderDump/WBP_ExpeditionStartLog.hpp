#ifndef UE4SS_SDK_WBP_ExpeditionStartLog_HPP
#define UE4SS_SDK_WBP_ExpeditionStartLog_HPP

class UWBP_ExpeditionStartLog_C : public UPalExpeditionStartLogWidget
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
    void OnLoaded_3A37B9DD49AD984D46FE91B38B42A88A(class UObject* Loaded);
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
    void ExecuteUbergraph_WBP_ExpeditionStartLog(int32 EntryPoint);
};

#endif
