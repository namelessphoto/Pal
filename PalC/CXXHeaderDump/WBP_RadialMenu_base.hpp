#ifndef UE4SS_SDK_WBP_RadialMenu_base_HPP
#define UE4SS_SDK_WBP_RadialMenu_base_HPP

class UWBP_RadialMenu_base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UCanvasPanel* arrowCanvas;
    class UImage* Base;
    class UImage* Base_1;
    class UCanvasPanel* centerCanvas;
    class UImage* Image_Arrow;
    class UImage* Line;
    class UCanvasPanel* menuCanvas;
    class UImage* Shadow;

    void SetVisibilityArrow(ESlateVisibility NewVisibility);
    void GetCenterPosition(FVector2D& Position);
    void SetVisibilityCenterBaseImage(ESlateVisibility NewVisibility);
    void SetArrowVisible(ESlateVisibility Visibility);
    void SetArrowAngle(double angleDegree);
    void Anm_OpenMenu();
    void Anm_CloseMenu();
    void ExecuteUbergraph_WBP_RadialMenu_base(int32 EntryPoint);
};

#endif
