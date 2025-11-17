#ifndef UE4SS_SDK_WBP_EnemyExclamationMarkIcon_HPP
#define UE4SS_SDK_WBP_EnemyExclamationMarkIcon_HPP

class UWBP_EnemyExclamationMarkIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_EnemyNotice_Ex_C* WBP_EnemyNotice_Ex;
    class APalCharacter* TargetCharacter;
    class UCurveVector* ScaleCurve;
    double Timer;
    double PosX;
    double DisplayTime;

    void CheckEnd(bool& IsEnd);
    void Setup(class APalCharacter* TargetPal);
    void Finished_263A711A43F529A2B1BDFD9C84555BC8();
    void Finished_E6B9CD8740962A7164A9698FF7EA74CA();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyExclamationMarkIcon(int32 EntryPoint);
};

#endif
