#ifndef UE4SS_SDK_BP_ActionPairBehavior_FeedItem_HPP
#define UE4SS_SDK_BP_ActionPairBehavior_FeedItem_HPP

class UBP_ActionPairBehavior_FeedItem_C : public UBP_ActionPairBehaviorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    EPalActionType GetEActionForRideBoss();
    void OnCompleted(class AActor* Human, class AActor* Monster);
    void GetHumanAnime(class UAnimMontage*& Montage);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionPairBehavior_FeedItem(int32 EntryPoint);
};

#endif
