#ifndef UE4SS_SDK_WBP_AttackWarningLoupe_HPP
#define UE4SS_SDK_WBP_AttackWarningLoupe_HPP

class UWBP_AttackWarningLoupe_C : public UWBP_LoupeBase_C
{
    class UImage* Loupe_Angle;
    FVector TargetLocation;

    void Setup(FVector TargetLocation);
    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetTargetWorldLocation(FVector& outVector);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void UpdateArrowImageAngle(double newAngle);
};

#endif
