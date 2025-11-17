#ifndef UE4SS_SDK_WBP_EnemyMark_HPP
#define UE4SS_SDK_WBP_EnemyMark_HPP

class UWBP_EnemyMark_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* CanvasPanel_85;
    TArray<TSoftObjectPtr<UWBP_EnemyQuestionMarkIcon_C>> QuMarkList;

    void Construct();
    void カスタムイベント_0(class APalCharacter* TargetCharacter);
    void カスタムイベント_1(class APalCharacter* TargetCharacter);
    void ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint);
};

#endif
