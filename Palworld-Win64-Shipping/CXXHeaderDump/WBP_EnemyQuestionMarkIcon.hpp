#ifndef UE4SS_SDK_WBP_EnemyQuestionMarkIcon_HPP
#define UE4SS_SDK_WBP_EnemyQuestionMarkIcon_HPP

class UWBP_EnemyQuestionMarkIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_EnemyNotice_Q_C* WBP_EnemyNotice_Q;
    class APalCharacter* TargetCharacter;
    class UCurveVector* ScaleCurve;
    double Timer;
    double PosX;
    double DisplayTime;

    void CheckEnd(bool& IsEnd);
    void Setup(class APalCharacter* TargetPal);
    void Finished_AAA80C6F4C0998EEE3398EA3A4904D66();
    void Finished_65824A4344E87236A81F99B8C42BE19D();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyQuestionMarkIcon(int32 EntryPoint);
};

#endif
