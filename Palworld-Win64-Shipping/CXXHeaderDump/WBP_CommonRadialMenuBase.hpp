#ifndef UE4SS_SDK_WBP_CommonRadialMenuBase_HPP
#define UE4SS_SDK_WBP_CommonRadialMenuBase_HPP

class UWBP_CommonRadialMenuBase_C : public UPalUIRadialMenuWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CursorLoop;
    class UWidgetAnimation* Default_In;
    class UBackgroundBlur* BackgroundBlur;
    class UCanvasPanel* CanvasPanel_Inner;
    class UImage* Image_Cursor;
    class UImage* Image_radialBase;
    class UWBP_RadialMenu_base_C* WBP_RadialMenu_base;
    class UImage* selectedMenuImage;
    class UImage* selectedMenuInnerImage;
    FWBP_CommonRadialMenuBase_COnSelectedIndex_forBP OnSelectedIndex_forBP;
    void OnSelectedIndex_forBP(int32 NewIndex, int32 LastIndex);
    double menuOffSetLength;
    FWBP_CommonRadialMenuBase_COnDecideIndex_forBP OnDecideIndex_forBP;
    void OnDecideIndex_forBP(int32 Index);
    double additionalWidgetOffsetLength;
    bool isEnableCheck;
    class UImage* selectedMenuLeftBorderImage;
    class UImage* selectedMenuRightBorderImage;
    bool isDIsplayOnly;
    class UMaterialInterface* SelectedPlateMaterial;
    class UMaterialInterface* SelectedBorderMaterial;
    class UMaterialInterface* BackGroundPlateMaterial;
    bool isUseLocalControllerInput;
    double mouseDetectDelta;
    class UWidget* CenterWidget;
    FPalUIActionBindData DecideActionHandle;
    FPalUIActionBindData DummyPressedActionHandle;
    class UPalUserWidget* InputParentWidget;
    TMap<int32, UWidget*> AdditionalWidget;
    FVector2D CenterOffset;
    double MenuScale;
    class UAkAudioEvent* HoveredSound;
    class UAkAudioEvent* ClickedSound;

    void OnChangedInputMethod(ECommonInputType bNewInputType);
    void OnPressed_Dummy();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetCenterPosition(FVector2D& Position);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDecided();
    void RecalcMenuNum(int32 newMenuNum);
    void ClearCenterWidget();
    void Set Center Widget(class UWidget* Widget, FVector2D CanvasSize, FVector2D Offset);
    void Close();
    void Open(class UPalUserWidget* ParentWidget, FPalDataTableRowName_UIInputAction DecideAction);
    void ClearAdditionalWidgets();
    void SetSelectedImageVisibility(bool IsVisible);
    void SetArrowVisibility(bool IsVisible);
    void CalcAdditionalWidgetPosition(int32 Index, FVector2D& Offset);
    void Set Additional Widget(int32 Index, class UUserWidget* AddWidget, class UCanvasPanelSlot*& Canvas);
    void CheckMouse_LocalController();
    void CalcOffsetPosition(int32 Index, FVector2D& Offset);
    void SetSelectedImageAngle(double inAngle);
    void CreateBgPlateImage();
    void Calc Image Angle(int32 Index, double& OutAngle);
    void CreateSelectedMenuImage();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BuildRadialMenuWidget();
    void OnInitialized();
    void OnChangedIndex(int32 NewIndex, int32 prevIndex);
    void Construct();
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void SetMouseCursorPositionCenter();
    void ExecuteUbergraph_WBP_CommonRadialMenuBase(int32 EntryPoint);
    void OnDecideIndex_forBP__DelegateSignature(int32 Index);
    void OnSelectedIndex_forBP__DelegateSignature(int32 NewIndex, int32 LastIndex);
};

#endif
