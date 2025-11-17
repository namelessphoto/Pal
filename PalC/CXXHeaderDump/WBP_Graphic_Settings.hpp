#ifndef UE4SS_SDK_WBP_Graphic_Settings_HPP
#define UE4SS_SDK_WBP_Graphic_Settings_HPP

class UWBP_Graphic_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* CautionText;
    class UBP_PalTextBlock_C* Text_UpscalingName;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AA;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Arachnophobia;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AutoContrast;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Brightness;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_CameraRecoil;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_CameraShake;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_DrawDistance;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_DrawDIstance_MapObject;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_DrawGrass;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_EffectQuality;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_FOV;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_LODBias;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_MaxFPS;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_MotionBlur;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Preset;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Resolution;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RideCameraLength;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Screen;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Shadow;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_TextureQuality;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Upscaling;
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VSync;
    FPalOptionGraphicsSettings Graphics Settings Cache;
    FPalOptionLocalStaticSettings LocalStaticSettingCache;
    TArray<FDataTableRowHandle> ScreenSettingMsgIds;
    TArray<FDataTableRowHandle> LevelMsgIds;
    TArray<FDataTableRowHandle> LevelMsgIds_Graphic;
    bool SomethingChanged;
    TMap<int32, TEnumAsByte<EAntiAliasingMethod>> AAMap;
    TArray<FString> AASettings;
    TMap<int32, FString> FPSSelection;
    FDataTableRowHandle NoLimitlMsgId;
    TArray<FIntPoint> SupportResolutions;
    TArray<FDataTableRowHandle> UpscalingLevelMsgIds_DLSS;
    TArray<FDataTableRowHandle> UpscalingLevelMsgIds_MetalFX;
    TMap<int32, UDLSSMode> UpscalingMap;
    TMap<int32, EPalOptionMapObjectDrawDistanceType> MapObjectDrawDistanceMap;
    TArray<FString> DrawDistanceStrings;

    void GetUpscalingMsgIdArray(TArray<FDataTableRowHandle>& MsgIdArray);
    void SetupUpscalingName();
    void GetMapObjectDrawDistanceTypeIndex(EPalOptionMapObjectDrawDistanceType DistanceType, int32& SelectionIndex);
    void SetupDrawDistanceStrings();
    void GetDisplayGraphicLevel(FPalOptionGraphicsSettings GraphicLevel, EPalOptionGraphicsLevel& Graphicsレベル);
    void Construct();
    void OnPresetChanged(int32 Selection);
    void OnWindowChanged(int32 Selection);
    void OnResolutionChanged(int32 Selection);
    void OnVSyncChanged(bool IsOn);
    void OnMotionBlurChanged(bool IsOn);
    void OnAAChanged(int32 Selection);
    void OnCameraShakeChanged(bool IsOn);
    void OnCameraRecoilChanged(bool IsOn);
    void OnFOVChanged(double Value);
    void OnLODChanged(double Value);
    void OnViewDisChanged(int32 Selection);
    void OnFoliageChanged(int32 Selection);
    void OnShadowChanged(int32 Selection);
    void OnBrightnessChanged(double Value);
    void OnAutoContrastChanged(bool IsOn);
    void OnTextureChanged(int32 Selection);
    void ApplySettings();
    void SetDefault();
    void OnRideCameraChanged(double Value);
    void OnUpscalingChanged(int32 DLSSLevel);
    void OnMaxFPSChanged(int32 Selection);
    void OnCommonQualityChanged(int32 Selection);
    void OnChangedMapObjectDrawDistanceType(int32 Selection);
    void OnChangedArachnophobiaMode(bool IsOn);
    void ExecuteUbergraph_WBP_Graphic_Settings(int32 EntryPoint);
};

#endif
