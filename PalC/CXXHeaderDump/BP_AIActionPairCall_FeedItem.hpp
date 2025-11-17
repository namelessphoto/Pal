#ifndef UE4SS_SDK_BP_AIActionPairCall_FeedItem_HPP
#define UE4SS_SDK_BP_AIActionPairCall_FeedItem_HPP

class UBP_AIActionPairCall_FeedItem_C : public UBP_AIActionPairCallBase_C
{
    FPalItemSlotId FeedItemSlotId;
    int32 FeedItemNum;

    void CreatePairBehaviorActionDynamicParameter(FActionDynamicParameter& DynamicParameter);
};

#endif
