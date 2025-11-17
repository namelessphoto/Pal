#ifndef UE4SS_SDK_WBP_LoupeBase_HPP
#define UE4SS_SDK_WBP_LoupeBase_HPP

class UWBP_LoupeBase_C : public UPalUIOffScreenLoupeBase
{
    FVector2D targetPosition;
    FVector2D NowPosition;
    bool isFirstUpdate;
    bool isInterpolationTranslate;
    double interpolationRate;

    void AdjustAlpha(FVector2D finalScreenPos, double& Alpha);
    void GetTranslationTarget(class UWidget*& Widget);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void RoundScreenPosition(FVector2D ScreenPosition, FVector2D& calcedPosition);
    void UpdateLoupeTranslation();
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void UpdateArrowImageAngle(double newAngle);
    void UpdatePositionAndVisibility(double Dot, FVector rootLocation, FVector TargetLocation);
};

#endif
