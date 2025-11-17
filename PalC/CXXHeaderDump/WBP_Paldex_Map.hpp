#ifndef UE4SS_SDK_WBP_Paldex_Map_HPP
#define UE4SS_SDK_WBP_Paldex_Map_HPP

class UWBP_Paldex_Map_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_TimeZone_Night;
    class UWidgetAnimation* Anm_TimeZone_Daytime;
    class UWidgetAnimation* Anm_TimeZone_All;
    class UCanvasPanel* Canvas_Distribution;
    class UCanvasPanel* Canvas_MapRoot;
    class UImage* Image_Map;
    class UImage* Image_Mask;
    class URetainerBox* RetainerBox_DistributionCircle;
    class URetainerBox* RetainerBox_Map;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Day;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Night;
    FVector2D MinLandscapePosXY;
    FVector2D MaxLandscapePosXY;
    FVector2D LandScapeSize;
    double maxZoomRate;
    FWBP_Paldex_Map_COnSwitchDayNight OnSwitchDayNight;
    void OnSwitchDayNight(TEnumAsByte<E_PaldexDistributionTimeType> Time);
    double OffsetRistrict;
    class UWBP_Map_IconPlayer_C* PlayerIcon;

    void SetVisibilityMap(bool IsVisible);
    void IsZoomMax(bool& IsMax);
    void SetZoomRate(double Rate);
    void ResetZoom();
    void AddZoomRate(double AddZoomRate);
    void SetupCircleWidget(TSubclassOf<class UUserWidget> Class, FVector WorldLocation, double realSpawnSize);
    void ResetOffset();
    void AddOffset(FVector2D Offset);
    void ClearDistributionCircle();
    void SetDistributionLocations(FPalUIPaldexDistributionLocationStruct dayTimeLocationStruct, FPalUIPaldexDistributionLocationStruct nightTimeLocationStruct, TEnumAsByte<E_PaldexDistributionTimeType> timeType, bool& isNoDistribution);
    void OnLoaded_EA50B4624B0D0BBAA2C2429C4AAD87A5(class UObject* Loaded);
    void AnmEvent_DayTime();
    void AnmEvent_NightTime();
    void AnmEvent_AllTime();
    void OnInitialized();
    void BndEvt__WBP_Paldex_Map_WBP_PalInvisibleButton_Night_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Paldex_Map_WBP_PalInvisibleButton_Day_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void LoadAndApplyDefaultMaskTexture(class UMaterialInstanceDynamic* TargetMaterial);
    void ExecuteUbergraph_WBP_Paldex_Map(int32 EntryPoint);
    void OnSwitchDayNight__DelegateSignature(TEnumAsByte<E_PaldexDistributionTimeType> Time);
};

#endif
